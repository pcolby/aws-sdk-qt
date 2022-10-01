// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMROUTINGENDPOINTGROUPRESPONSE_H
#define QTAWS_CREATECUSTOMROUTINGENDPOINTGROUPRESPONSE_H

#include "globalacceleratorresponse.h"
#include "createcustomroutingendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateCustomRoutingEndpointGroupResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT CreateCustomRoutingEndpointGroupResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    CreateCustomRoutingEndpointGroupResponse(const CreateCustomRoutingEndpointGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomRoutingEndpointGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomRoutingEndpointGroupResponse)
    Q_DISABLE_COPY(CreateCustomRoutingEndpointGroupResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
