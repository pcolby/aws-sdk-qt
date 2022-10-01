// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAFLOWENDPOINTGROUPRESPONSE_H
#define QTAWS_CREATEDATAFLOWENDPOINTGROUPRESPONSE_H

#include "groundstationresponse.h"
#include "createdataflowendpointgrouprequest.h"

namespace QtAws {
namespace GroundStation {

class CreateDataflowEndpointGroupResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT CreateDataflowEndpointGroupResponse : public GroundStationResponse {
    Q_OBJECT

public:
    CreateDataflowEndpointGroupResponse(const CreateDataflowEndpointGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataflowEndpointGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataflowEndpointGroupResponse)
    Q_DISABLE_COPY(CreateDataflowEndpointGroupResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
