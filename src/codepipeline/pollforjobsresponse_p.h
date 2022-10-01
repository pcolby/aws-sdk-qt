// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORJOBSRESPONSE_P_H
#define QTAWS_POLLFORJOBSRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class PollForJobsResponse;

class PollForJobsResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit PollForJobsResponsePrivate(PollForJobsResponse * const q);

    void parsePollForJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PollForJobsResponse)
    Q_DISABLE_COPY(PollForJobsResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
