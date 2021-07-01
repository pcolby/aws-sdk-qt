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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_STORAGEGATEWAYREQUEST_P_H
#define QTAWS_STORAGEGATEWAYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class StorageGatewayRequest;

class StorageGatewayRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    StorageGatewayRequest::Action action; ///< StorageGateway action to be performed.
    QString apiVersion;        ///< StorageGateway API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< StorageGateway request (query string) parameters. @todo?

    StorageGatewayRequestPrivate(const StorageGatewayRequest::Action action, StorageGatewayRequest * const q);
    StorageGatewayRequestPrivate(const StorageGatewayRequestPrivate &other, StorageGatewayRequest * const q);

    static QString toString(const StorageGatewayRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(StorageGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
