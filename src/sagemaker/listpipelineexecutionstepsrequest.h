// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEEXECUTIONSTEPSREQUEST_H
#define QTAWS_LISTPIPELINEEXECUTIONSTEPSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListPipelineExecutionStepsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListPipelineExecutionStepsRequest : public SageMakerRequest {

public:
    ListPipelineExecutionStepsRequest(const ListPipelineExecutionStepsRequest &other);
    ListPipelineExecutionStepsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPipelineExecutionStepsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
