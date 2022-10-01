// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPIPELINEEXECUTIONSTEPSUCCESSREQUEST_H
#define QTAWS_SENDPIPELINEEXECUTIONSTEPSUCCESSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class SendPipelineExecutionStepSuccessRequestPrivate;

class QTAWSSAGEMAKER_EXPORT SendPipelineExecutionStepSuccessRequest : public SageMakerRequest {

public:
    SendPipelineExecutionStepSuccessRequest(const SendPipelineExecutionStepSuccessRequest &other);
    SendPipelineExecutionStepSuccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendPipelineExecutionStepSuccessRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
