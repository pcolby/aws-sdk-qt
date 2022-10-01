// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTRUNRESPONSE_P_H
#define QTAWS_GETBLUEPRINTRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetBlueprintRunResponse;

class GetBlueprintRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetBlueprintRunResponsePrivate(GetBlueprintRunResponse * const q);

    void parseGetBlueprintRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBlueprintRunResponse)
    Q_DISABLE_COPY(GetBlueprintRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
