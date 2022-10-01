// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTGROUPSRESPONSE_H
#define QTAWS_LISTENDPOINTGROUPSRESPONSE_H

#include "globalacceleratorresponse.h"
#include "listendpointgroupsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListEndpointGroupsResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListEndpointGroupsResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    ListEndpointGroupsResponse(const ListEndpointGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEndpointGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEndpointGroupsResponse)
    Q_DISABLE_COPY(ListEndpointGroupsResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
