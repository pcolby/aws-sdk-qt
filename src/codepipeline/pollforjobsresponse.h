// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORJOBSRESPONSE_H
#define QTAWS_POLLFORJOBSRESPONSE_H

#include "codepipelineresponse.h"
#include "pollforjobsrequest.h"

namespace QtAws {
namespace CodePipeline {

class PollForJobsResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT PollForJobsResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    PollForJobsResponse(const PollForJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PollForJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollForJobsResponse)
    Q_DISABLE_COPY(PollForJobsResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
