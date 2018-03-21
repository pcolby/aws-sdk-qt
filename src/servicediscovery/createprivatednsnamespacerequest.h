/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_CREATEPRIVATEDNSNAMESPACEREQUEST_H
#define QTAWS_CREATEPRIVATEDNSNAMESPACEREQUEST_H

#include "servicediscoveryrequest.h"

namespace AWS {

namespace ServiceDiscovery {

class CreatePrivateDnsNamespaceRequestPrivate;

class QTAWS_EXPORT CreatePrivateDnsNamespaceRequest : public ServiceDiscoveryRequest {

public:
    CreatePrivateDnsNamespaceRequest(const CreatePrivateDnsNamespaceRequest &other);
    CreatePrivateDnsNamespaceRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(CreatePrivateDnsNamespaceRequest)

}

} // namespace ServiceDiscovery
} // namespace AWS

#endif
