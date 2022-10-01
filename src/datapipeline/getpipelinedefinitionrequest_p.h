// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINEDEFINITIONREQUEST_P_H
#define QTAWS_GETPIPELINEDEFINITIONREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "getpipelinedefinitionrequest.h"

namespace QtAws {
namespace DataPipeline {

class GetPipelineDefinitionRequest;

class GetPipelineDefinitionRequestPrivate : public DataPipelineRequestPrivate {

public:
    GetPipelineDefinitionRequestPrivate(const DataPipelineRequest::Action action,
                                   GetPipelineDefinitionRequest * const q);
    GetPipelineDefinitionRequestPrivate(const GetPipelineDefinitionRequestPrivate &other,
                                   GetPipelineDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPipelineDefinitionRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
