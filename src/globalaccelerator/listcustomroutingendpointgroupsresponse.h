// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGENDPOINTGROUPSRESPONSE_H
#define QTAWS_LISTCUSTOMROUTINGENDPOINTGROUPSRESPONSE_H

#include "globalacceleratorresponse.h"
#include "listcustomroutingendpointgroupsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingEndpointGroupsResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListCustomRoutingEndpointGroupsResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    ListCustomRoutingEndpointGroupsResponse(const ListCustomRoutingEndpointGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomRoutingEndpointGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomRoutingEndpointGroupsResponse)
    Q_DISABLE_COPY(ListCustomRoutingEndpointGroupsResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
