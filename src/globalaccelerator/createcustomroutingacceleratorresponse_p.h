// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMROUTINGACCELERATORRESPONSE_P_H
#define QTAWS_CREATECUSTOMROUTINGACCELERATORRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateCustomRoutingAcceleratorResponse;

class CreateCustomRoutingAcceleratorResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit CreateCustomRoutingAcceleratorResponsePrivate(CreateCustomRoutingAcceleratorResponse * const q);

    void parseCreateCustomRoutingAcceleratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomRoutingAcceleratorResponse)
    Q_DISABLE_COPY(CreateCustomRoutingAcceleratorResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
