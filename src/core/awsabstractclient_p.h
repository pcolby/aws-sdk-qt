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

#include "qtawsglobal.h"

class QNetworkAccessManager;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsEndpoint;

class QTAWS_EXPORT AwsAbstractClientPrivate {

public:
    AwsEndpoint * endpoint;                       ///< Amazon service endpoint.
    QNetworkAccessManager * networkAccessManager; ///< Network access manager.
    QList<AwsRequest> pendingRequests;

    AwsAbstractClientPrivate(AwsAbstractClient * const q);

private:
    Q_DECLARE_PUBLIC(AwsAbstractClient)
    AwsAbstractClient * const q_ptr; ///< Internal q-pointer.

};

QTAWS_END_NAMESPACE

#endif
