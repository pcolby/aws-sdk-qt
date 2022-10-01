// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAFLOWENDPOINTGROUPRESPONSE_H
#define QTAWS_GETDATAFLOWENDPOINTGROUPRESPONSE_H

#include "groundstationresponse.h"
#include "getdataflowendpointgrouprequest.h"

namespace QtAws {
namespace GroundStation {

class GetDataflowEndpointGroupResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT GetDataflowEndpointGroupResponse : public GroundStationResponse {
    Q_OBJECT

public:
    GetDataflowEndpointGroupResponse(const GetDataflowEndpointGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataflowEndpointGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataflowEndpointGroupResponse)
    Q_DISABLE_COPY(GetDataflowEndpointGroupResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
