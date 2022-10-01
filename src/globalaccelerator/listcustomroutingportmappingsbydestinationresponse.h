// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONRESPONSE_H
#define QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONRESPONSE_H

#include "globalacceleratorresponse.h"
#include "listcustomroutingportmappingsbydestinationrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingPortMappingsByDestinationResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListCustomRoutingPortMappingsByDestinationResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    ListCustomRoutingPortMappingsByDestinationResponse(const ListCustomRoutingPortMappingsByDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomRoutingPortMappingsByDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomRoutingPortMappingsByDestinationResponse)
    Q_DISABLE_COPY(ListCustomRoutingPortMappingsByDestinationResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
