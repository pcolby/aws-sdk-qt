// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTEVENTSCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutEventsConfigurationResponse;

class PutEventsConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutEventsConfigurationResponsePrivate(PutEventsConfigurationResponse * const q);

    void parsePutEventsConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEventsConfigurationResponse)
    Q_DISABLE_COPY(PutEventsConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
