// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILENAMERESPONSE_P_H
#define QTAWS_UPDATEROUTINGPROFILENAMERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileNameResponse;

class UpdateRoutingProfileNameResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateRoutingProfileNameResponsePrivate(UpdateRoutingProfileNameResponse * const q);

    void parseUpdateRoutingProfileNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingProfileNameResponse)
    Q_DISABLE_COPY(UpdateRoutingProfileNameResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
