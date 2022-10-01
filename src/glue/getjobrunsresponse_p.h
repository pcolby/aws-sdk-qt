// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBRUNSRESPONSE_P_H
#define QTAWS_GETJOBRUNSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetJobRunsResponse;

class GetJobRunsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetJobRunsResponsePrivate(GetJobRunsResponse * const q);

    void parseGetJobRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobRunsResponse)
    Q_DISABLE_COPY(GetJobRunsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
