// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAFLOWENDPOINTGROUPSREQUEST_H
#define QTAWS_LISTDATAFLOWENDPOINTGROUPSREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class ListDataflowEndpointGroupsRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT ListDataflowEndpointGroupsRequest : public GroundStationRequest {

public:
    ListDataflowEndpointGroupsRequest(const ListDataflowEndpointGroupsRequest &other);
    ListDataflowEndpointGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataflowEndpointGroupsRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
