// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBSRESPONSE_P_H
#define QTAWS_GETJOBSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetJobsResponse;

class GetJobsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetJobsResponsePrivate(GetJobsResponse * const q);

    void parseGetJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobsResponse)
    Q_DISABLE_COPY(GetJobsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
