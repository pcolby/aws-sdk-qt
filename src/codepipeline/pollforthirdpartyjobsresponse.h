// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORTHIRDPARTYJOBSRESPONSE_H
#define QTAWS_POLLFORTHIRDPARTYJOBSRESPONSE_H

#include "codepipelineresponse.h"
#include "pollforthirdpartyjobsrequest.h"

namespace QtAws {
namespace CodePipeline {

class PollForThirdPartyJobsResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT PollForThirdPartyJobsResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    PollForThirdPartyJobsResponse(const PollForThirdPartyJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PollForThirdPartyJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollForThirdPartyJobsResponse)
    Q_DISABLE_COPY(PollForThirdPartyJobsResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
