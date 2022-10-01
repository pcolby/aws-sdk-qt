// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTRESPONSE_P_H
#define QTAWS_GETBLUEPRINTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetBlueprintResponse;

class GetBlueprintResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetBlueprintResponsePrivate(GetBlueprintResponse * const q);

    void parseGetBlueprintResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBlueprintResponse)
    Q_DISABLE_COPY(GetBlueprintResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
