// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAFLOWENDPOINTGROUPRESPONSE_H
#define QTAWS_DELETEDATAFLOWENDPOINTGROUPRESPONSE_H

#include "groundstationresponse.h"
#include "deletedataflowendpointgrouprequest.h"

namespace QtAws {
namespace GroundStation {

class DeleteDataflowEndpointGroupResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT DeleteDataflowEndpointGroupResponse : public GroundStationResponse {
    Q_OBJECT

public:
    DeleteDataflowEndpointGroupResponse(const DeleteDataflowEndpointGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDataflowEndpointGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataflowEndpointGroupResponse)
    Q_DISABLE_COPY(DeleteDataflowEndpointGroupResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
