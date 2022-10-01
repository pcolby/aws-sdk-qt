// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRIGGERRESPONSE_P_H
#define QTAWS_STARTTRIGGERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StartTriggerResponse;

class StartTriggerResponsePrivate : public GlueResponsePrivate {

public:

    explicit StartTriggerResponsePrivate(StartTriggerResponse * const q);

    void parseStartTriggerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTriggerResponse)
    Q_DISABLE_COPY(StartTriggerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
