// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILECONCURRENCYRESPONSE_P_H
#define QTAWS_UPDATEROUTINGPROFILECONCURRENCYRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileConcurrencyResponse;

class UpdateRoutingProfileConcurrencyResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateRoutingProfileConcurrencyResponsePrivate(UpdateRoutingProfileConcurrencyResponse * const q);

    void parseUpdateRoutingProfileConcurrencyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingProfileConcurrencyResponse)
    Q_DISABLE_COPY(UpdateRoutingProfileConcurrencyResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
