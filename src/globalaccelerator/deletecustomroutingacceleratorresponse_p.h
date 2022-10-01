// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGACCELERATORRESPONSE_P_H
#define QTAWS_DELETECUSTOMROUTINGACCELERATORRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingAcceleratorResponse;

class DeleteCustomRoutingAcceleratorResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DeleteCustomRoutingAcceleratorResponsePrivate(DeleteCustomRoutingAcceleratorResponse * const q);

    void parseDeleteCustomRoutingAcceleratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomRoutingAcceleratorResponse)
    Q_DISABLE_COPY(DeleteCustomRoutingAcceleratorResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
