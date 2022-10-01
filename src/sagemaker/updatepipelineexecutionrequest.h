// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINEEXECUTIONREQUEST_H
#define QTAWS_UPDATEPIPELINEEXECUTIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdatePipelineExecutionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdatePipelineExecutionRequest : public SageMakerRequest {

public:
    UpdatePipelineExecutionRequest(const UpdatePipelineExecutionRequest &other);
    UpdatePipelineExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePipelineExecutionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
