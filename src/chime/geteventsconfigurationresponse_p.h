// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETEVENTSCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetEventsConfigurationResponse;

class GetEventsConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetEventsConfigurationResponsePrivate(GetEventsConfigurationResponse * const q);

    void parseGetEventsConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventsConfigurationResponse)
    Q_DISABLE_COPY(GetEventsConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
