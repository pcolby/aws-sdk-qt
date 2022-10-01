// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTGROUPRESPONSE_H
#define QTAWS_CREATEENDPOINTGROUPRESPONSE_H

#include "globalacceleratorresponse.h"
#include "createendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateEndpointGroupResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT CreateEndpointGroupResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    CreateEndpointGroupResponse(const CreateEndpointGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEndpointGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEndpointGroupResponse)
    Q_DISABLE_COPY(CreateEndpointGroupResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
