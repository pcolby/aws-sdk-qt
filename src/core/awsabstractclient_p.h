/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSABSTRACTCLIENT_P_H
#define AWSABSTRACTCLIENT_P_H

#include "awsregion.h"

#include <QSet>

class QNetworkAccessManager;
class QUrl;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class AwsAbstractRequest;
class AwsAbstractSignature;

class QTAWS_EXPORT AwsAbstractClientPrivate {

public:
    AwsAbstractCredentials * credentials;         ///< Amazon credentials.
    QUrl endpoint;                                ///< Amazon service endpoint.
    QNetworkAccessManager * networkAccessManager; ///< Network access manager.
    AwsRegion::Region region;                     ///< Amazon service region.
    QString serviceName;                          ///< Amazon service name.
    AwsAbstractSignature * signature;             ///< Amazon signature object.

    AwsAbstractClientPrivate(AwsAbstractClient * const q);

    virtual ~AwsAbstractClientPrivate();

protected:
    AwsAbstractClient * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(AwsAbstractClient)
    Q_DISABLE_COPY(AwsAbstractClientPrivate)

};

QTAWS_END_NAMESPACE

#endif
