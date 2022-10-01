// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVECUSTOMROUTINGENDPOINTSRESPONSE_H
#define QTAWS_REMOVECUSTOMROUTINGENDPOINTSRESPONSE_H

#include "globalacceleratorresponse.h"
#include "removecustomroutingendpointsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class RemoveCustomRoutingEndpointsResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT RemoveCustomRoutingEndpointsResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    RemoveCustomRoutingEndpointsResponse(const RemoveCustomRoutingEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveCustomRoutingEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveCustomRoutingEndpointsResponse)
    Q_DISABLE_COPY(RemoveCustomRoutingEndpointsResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
