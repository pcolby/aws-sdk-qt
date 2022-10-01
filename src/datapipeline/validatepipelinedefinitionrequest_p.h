// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEPIPELINEDEFINITIONREQUEST_P_H
#define QTAWS_VALIDATEPIPELINEDEFINITIONREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "validatepipelinedefinitionrequest.h"

namespace QtAws {
namespace DataPipeline {

class ValidatePipelineDefinitionRequest;

class ValidatePipelineDefinitionRequestPrivate : public DataPipelineRequestPrivate {

public:
    ValidatePipelineDefinitionRequestPrivate(const DataPipelineRequest::Action action,
                                   ValidatePipelineDefinitionRequest * const q);
    ValidatePipelineDefinitionRequestPrivate(const ValidatePipelineDefinitionRequestPrivate &other,
                                   ValidatePipelineDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ValidatePipelineDefinitionRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
