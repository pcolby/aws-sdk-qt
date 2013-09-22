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
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSABSTRACTSIGNATURE_H
#define AWSABSTRACTSIGNATURE_H

#include "qtawsglobal.h"
#include "awsabstractcredentials.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrlQuery>

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT AwsAbstractSignature {

public:
    virtual ~AwsAbstractSignature();

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const = 0;

protected:
    QString canonicalPath(const QUrl &url) const;

    QByteArray canonicalQuery(const QUrlQuery &query) const;

    QString httpMethod(const QNetworkAccessManager::Operation operation) const;

    friend class TestAwsAbstractSignature;
};

QTAWS_END_NAMESPACE

#endif
