// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAFLOWENDPOINTGROUPREQUEST_H
#define QTAWS_GETDATAFLOWENDPOINTGROUPREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class GetDataflowEndpointGroupRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT GetDataflowEndpointGroupRequest : public GroundStationRequest {

public:
    GetDataflowEndpointGroupRequest(const GetDataflowEndpointGroupRequest &other);
    GetDataflowEndpointGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataflowEndpointGroupRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
