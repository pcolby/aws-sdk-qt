/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_CREATEPUBLICDNSNAMESPACEREQUEST_P_H
#define QTAWS_CREATEPUBLICDNSNAMESPACEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "createpublicdnsnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreatePublicDnsNamespaceRequest;

class QTAWS_EXPORT CreatePublicDnsNamespaceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    CreatePublicDnsNamespaceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   CreatePublicDnsNamespaceRequest * const q);
    CreatePublicDnsNamespaceRequestPrivate(const CreatePublicDnsNamespaceRequestPrivate &other,
                                   CreatePublicDnsNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePublicDnsNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
