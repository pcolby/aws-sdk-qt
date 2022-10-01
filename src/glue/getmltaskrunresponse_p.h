// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTASKRUNRESPONSE_P_H
#define QTAWS_GETMLTASKRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetMLTaskRunResponse;

class GetMLTaskRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetMLTaskRunResponsePrivate(GetMLTaskRunResponse * const q);

    void parseGetMLTaskRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMLTaskRunResponse)
    Q_DISABLE_COPY(GetMLTaskRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
