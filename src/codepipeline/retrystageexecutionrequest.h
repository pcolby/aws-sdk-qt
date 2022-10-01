// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYSTAGEEXECUTIONREQUEST_H
#define QTAWS_RETRYSTAGEEXECUTIONREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class RetryStageExecutionRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT RetryStageExecutionRequest : public CodePipelineRequest {

public:
    RetryStageExecutionRequest(const RetryStageExecutionRequest &other);
    RetryStageExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetryStageExecutionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
