// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCUSTOMROUTINGENDPOINTSRESPONSE_H
#define QTAWS_ADDCUSTOMROUTINGENDPOINTSRESPONSE_H

#include "globalacceleratorresponse.h"
#include "addcustomroutingendpointsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class AddCustomRoutingEndpointsResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT AddCustomRoutingEndpointsResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    AddCustomRoutingEndpointsResponse(const AddCustomRoutingEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddCustomRoutingEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddCustomRoutingEndpointsResponse)
    Q_DISABLE_COPY(AddCustomRoutingEndpointsResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
