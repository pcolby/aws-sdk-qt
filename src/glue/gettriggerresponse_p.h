// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRIGGERRESPONSE_P_H
#define QTAWS_GETTRIGGERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetTriggerResponse;

class GetTriggerResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetTriggerResponsePrivate(GetTriggerResponse * const q);

    void parseGetTriggerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTriggerResponse)
    Q_DISABLE_COPY(GetTriggerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
