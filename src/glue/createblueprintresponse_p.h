// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBLUEPRINTRESPONSE_P_H
#define QTAWS_CREATEBLUEPRINTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateBlueprintResponse;

class CreateBlueprintResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateBlueprintResponsePrivate(CreateBlueprintResponse * const q);

    void parseCreateBlueprintResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBlueprintResponse)
    Q_DISABLE_COPY(CreateBlueprintResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
