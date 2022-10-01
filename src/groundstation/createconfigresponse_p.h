// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGRESPONSE_P_H
#define QTAWS_CREATECONFIGRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class CreateConfigResponse;

class CreateConfigResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit CreateConfigResponsePrivate(CreateConfigResponse * const q);

    void parseCreateConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConfigResponse)
    Q_DISABLE_COPY(CreateConfigResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
