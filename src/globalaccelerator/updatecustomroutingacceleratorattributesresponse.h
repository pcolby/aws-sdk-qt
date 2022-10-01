// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGACCELERATORATTRIBUTESRESPONSE_H
#define QTAWS_UPDATECUSTOMROUTINGACCELERATORATTRIBUTESRESPONSE_H

#include "globalacceleratorresponse.h"
#include "updatecustomroutingacceleratorattributesrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingAcceleratorAttributesResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateCustomRoutingAcceleratorAttributesResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    UpdateCustomRoutingAcceleratorAttributesResponse(const UpdateCustomRoutingAcceleratorAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCustomRoutingAcceleratorAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomRoutingAcceleratorAttributesResponse)
    Q_DISABLE_COPY(UpdateCustomRoutingAcceleratorAttributesResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
