// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGENDPOINTGROUPSREQUEST_H
#define QTAWS_LISTCUSTOMROUTINGENDPOINTGROUPSREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingEndpointGroupsRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListCustomRoutingEndpointGroupsRequest : public GlobalAcceleratorRequest {

public:
    ListCustomRoutingEndpointGroupsRequest(const ListCustomRoutingEndpointGroupsRequest &other);
    ListCustomRoutingEndpointGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomRoutingEndpointGroupsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
