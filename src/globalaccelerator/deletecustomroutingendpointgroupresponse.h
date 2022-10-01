// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGENDPOINTGROUPRESPONSE_H
#define QTAWS_DELETECUSTOMROUTINGENDPOINTGROUPRESPONSE_H

#include "globalacceleratorresponse.h"
#include "deletecustomroutingendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingEndpointGroupResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeleteCustomRoutingEndpointGroupResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DeleteCustomRoutingEndpointGroupResponse(const DeleteCustomRoutingEndpointGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomRoutingEndpointGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomRoutingEndpointGroupResponse)
    Q_DISABLE_COPY(DeleteCustomRoutingEndpointGroupResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
