// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPIPELINEDEFINITIONREQUEST_P_H
#define QTAWS_PUTPIPELINEDEFINITIONREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "putpipelinedefinitionrequest.h"

namespace QtAws {
namespace DataPipeline {

class PutPipelineDefinitionRequest;

class PutPipelineDefinitionRequestPrivate : public DataPipelineRequestPrivate {

public:
    PutPipelineDefinitionRequestPrivate(const DataPipelineRequest::Action action,
                                   PutPipelineDefinitionRequest * const q);
    PutPipelineDefinitionRequestPrivate(const PutPipelineDefinitionRequestPrivate &other,
                                   PutPipelineDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPipelineDefinitionRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
