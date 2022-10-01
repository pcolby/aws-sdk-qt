// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPIPELINEEXECUTIONSTEPFAILUREREQUEST_H
#define QTAWS_SENDPIPELINEEXECUTIONSTEPFAILUREREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class SendPipelineExecutionStepFailureRequestPrivate;

class QTAWSSAGEMAKER_EXPORT SendPipelineExecutionStepFailureRequest : public SageMakerRequest {

public:
    SendPipelineExecutionStepFailureRequest(const SendPipelineExecutionStepFailureRequest &other);
    SendPipelineExecutionStepFailureRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendPipelineExecutionStepFailureRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
