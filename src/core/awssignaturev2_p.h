/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSSIGNATUREV2_P_H
#define AWSSIGNATUREV2_P_H

#include "qtawscoreglobal.h"
#include "awsabstractsignature_p.h"

#include <QCryptographicHash>
#include <QNetworkAccessManager>
#include <QUrl>

namespace QtAws {
namespace Core {

class AwsSignatureV2;

class AwsSignatureV2Private : public AwsAbstractSignaturePrivate {

public:
    QCryptographicHash::Algorithm hashAlgorithm; ///< Hash algorithm to use when signing.

    AwsSignatureV2Private(const QCryptographicHash::Algorithm algorithm, AwsSignatureV2 * const q);

    void adornRequest(QNetworkRequest &request, const AwsAbstractCredentials &credentials) const;

    QByteArray canonicalRequest(const QNetworkAccessManager::Operation operation, const QUrl &url) const;

    QByteArray signatureMethod(const QCryptographicHash::Algorithm algorithm) const;

private:
    Q_DECLARE_PUBLIC(AwsSignatureV2)
    Q_DISABLE_COPY(AwsSignatureV2Private)
    friend class TestAwsSignatureV2;
};

} // namespace Core
} // namespace QtAws

#endif
