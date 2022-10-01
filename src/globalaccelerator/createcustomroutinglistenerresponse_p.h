// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMROUTINGLISTENERRESPONSE_P_H
#define QTAWS_CREATECUSTOMROUTINGLISTENERRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateCustomRoutingListenerResponse;

class CreateCustomRoutingListenerResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit CreateCustomRoutingListenerResponsePrivate(CreateCustomRoutingListenerResponse * const q);

    void parseCreateCustomRoutingListenerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomRoutingListenerResponse)
    Q_DISABLE_COPY(CreateCustomRoutingListenerResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
