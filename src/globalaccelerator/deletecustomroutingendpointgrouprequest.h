// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGENDPOINTGROUPREQUEST_H
#define QTAWS_DELETECUSTOMROUTINGENDPOINTGROUPREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingEndpointGroupRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeleteCustomRoutingEndpointGroupRequest : public GlobalAcceleratorRequest {

public:
    DeleteCustomRoutingEndpointGroupRequest(const DeleteCustomRoutingEndpointGroupRequest &other);
    DeleteCustomRoutingEndpointGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomRoutingEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
