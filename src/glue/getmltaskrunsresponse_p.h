// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTASKRUNSRESPONSE_P_H
#define QTAWS_GETMLTASKRUNSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetMLTaskRunsResponse;

class GetMLTaskRunsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetMLTaskRunsResponsePrivate(GetMLTaskRunsResponse * const q);

    void parseGetMLTaskRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMLTaskRunsResponse)
    Q_DISABLE_COPY(GetMLTaskRunsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
