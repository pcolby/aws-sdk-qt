// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTRUNSRESPONSE_P_H
#define QTAWS_GETBLUEPRINTRUNSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetBlueprintRunsResponse;

class GetBlueprintRunsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetBlueprintRunsResponsePrivate(GetBlueprintRunsResponse * const q);

    void parseGetBlueprintRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBlueprintRunsResponse)
    Q_DISABLE_COPY(GetBlueprintRunsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
