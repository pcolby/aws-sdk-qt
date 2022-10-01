// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIPELINEEXECUTIONREQUEST_H
#define QTAWS_STARTPIPELINEEXECUTIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StartPipelineExecutionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StartPipelineExecutionRequest : public SageMakerRequest {

public:
    StartPipelineExecutionRequest(const StartPipelineExecutionRequest &other);
    StartPipelineExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPipelineExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
