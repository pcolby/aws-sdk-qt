// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGACCELERATORRESPONSE_H
#define QTAWS_UPDATECUSTOMROUTINGACCELERATORRESPONSE_H

#include "globalacceleratorresponse.h"
#include "updatecustomroutingacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingAcceleratorResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateCustomRoutingAcceleratorResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    UpdateCustomRoutingAcceleratorResponse(const UpdateCustomRoutingAcceleratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCustomRoutingAcceleratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomRoutingAcceleratorResponse)
    Q_DISABLE_COPY(UpdateCustomRoutingAcceleratorResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
