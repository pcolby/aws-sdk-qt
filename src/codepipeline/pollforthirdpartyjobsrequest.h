// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORTHIRDPARTYJOBSREQUEST_H
#define QTAWS_POLLFORTHIRDPARTYJOBSREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class PollForThirdPartyJobsRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT PollForThirdPartyJobsRequest : public CodePipelineRequest {

public:
    PollForThirdPartyJobsRequest(const PollForThirdPartyJobsRequest &other);
    PollForThirdPartyJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollForThirdPartyJobsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
