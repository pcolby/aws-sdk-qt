// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGLISTENERRESPONSE_P_H
#define QTAWS_UPDATECUSTOMROUTINGLISTENERRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingListenerResponse;

class UpdateCustomRoutingListenerResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit UpdateCustomRoutingListenerResponsePrivate(UpdateCustomRoutingListenerResponse * const q);

    void parseUpdateCustomRoutingListenerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCustomRoutingListenerResponse)
    Q_DISABLE_COPY(UpdateCustomRoutingListenerResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
