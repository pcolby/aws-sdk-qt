// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPIPELINEEXECUTIONREQUEST_H
#define QTAWS_STOPPIPELINEEXECUTIONREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class StopPipelineExecutionRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT StopPipelineExecutionRequest : public CodePipelineRequest {

public:
    StopPipelineExecutionRequest(const StopPipelineExecutionRequest &other);
    StopPipelineExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopPipelineExecutionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
