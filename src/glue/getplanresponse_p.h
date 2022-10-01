// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLANRESPONSE_P_H
#define QTAWS_GETPLANRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetPlanResponse;

class GetPlanResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetPlanResponsePrivate(GetPlanResponse * const q);

    void parseGetPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPlanResponse)
    Q_DISABLE_COPY(GetPlanResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
