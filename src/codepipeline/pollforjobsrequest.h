// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORJOBSREQUEST_H
#define QTAWS_POLLFORJOBSREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class PollForJobsRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT PollForJobsRequest : public CodePipelineRequest {

public:
    PollForJobsRequest(const PollForJobsRequest &other);
    PollForJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollForJobsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
