// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBLUEPRINTRUNRESPONSE_P_H
#define QTAWS_STARTBLUEPRINTRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StartBlueprintRunResponse;

class StartBlueprintRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit StartBlueprintRunResponsePrivate(StartBlueprintRunResponse * const q);

    void parseStartBlueprintRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartBlueprintRunResponse)
    Q_DISABLE_COPY(StartBlueprintRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
