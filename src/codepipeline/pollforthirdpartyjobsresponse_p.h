// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORTHIRDPARTYJOBSRESPONSE_P_H
#define QTAWS_POLLFORTHIRDPARTYJOBSRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class PollForThirdPartyJobsResponse;

class PollForThirdPartyJobsResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit PollForThirdPartyJobsResponsePrivate(PollForThirdPartyJobsResponse * const q);

    void parsePollForThirdPartyJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PollForThirdPartyJobsResponse)
    Q_DISABLE_COPY(PollForThirdPartyJobsResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
