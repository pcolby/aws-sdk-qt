// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIGGERRESPONSE_P_H
#define QTAWS_UPDATETRIGGERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateTriggerResponse;

class UpdateTriggerResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateTriggerResponsePrivate(UpdateTriggerResponse * const q);

    void parseUpdateTriggerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTriggerResponse)
    Q_DISABLE_COPY(UpdateTriggerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
