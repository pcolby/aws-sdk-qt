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

#ifndef QTAWS_GETNAMESPACEREQUEST_P_H
#define QTAWS_GETNAMESPACEREQUEST_P_H

#include "servicediscovery_p.h"
#include "getnamespacerequest.h"

namespace AWS {

namespace ServiceDiscovery {

class GetNamespaceRequest;

class QTAWS_EXPORT GetNamespaceRequestPrivate : public ServiceDiscoveryPrivate {

public:
    GetNamespaceRequestPrivate(const ServiceDiscovery::Action action,
                                   GetNamespaceRequest * const q);
    GetNamespaceRequestPrivate(const GetNamespaceRequestPrivate &other,
                                   GetNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace AWS

#endif
