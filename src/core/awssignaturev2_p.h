/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSSIGNATUREV2_P_H
#define AWSSIGNATUREV2_P_H

#include "qtawsglobal.h"

#include <QCryptographicHash>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QUrlQuery>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV2;

class QTAWS_EXPORT AwsSignatureV2Private {
    Q_DECLARE_PUBLIC(AwsSignatureV2)

public:
    QCryptographicHash::Algorithm hashAlgorithm; ///< Hash algorithm to use when signing.

    AwsSignatureV2Private(AwsSignatureV2 * const q);

    QByteArray canonicalRequest(const QNetworkAccessManager::Operation operation, const QUrl &url) const;

private:
    AwsSignatureV2 * const q_ptr; ///< Internal q-pointer.
    friend class TestAwsSignatureV2;
};

QTAWS_END_NAMESPACE

#endif
