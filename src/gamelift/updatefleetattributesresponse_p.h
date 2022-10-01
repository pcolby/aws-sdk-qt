// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETATTRIBUTESRESPONSE_P_H
#define QTAWS_UPDATEFLEETATTRIBUTESRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetAttributesResponse;

class UpdateFleetAttributesResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateFleetAttributesResponsePrivate(UpdateFleetAttributesResponse * const q);

    void parseUpdateFleetAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFleetAttributesResponse)
    Q_DISABLE_COPY(UpdateFleetAttributesResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
