// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEPIPELINEREQUEST_P_H
#define QTAWS_DEACTIVATEPIPELINEREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "deactivatepipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class DeactivatePipelineRequest;

class DeactivatePipelineRequestPrivate : public DataPipelineRequestPrivate {

public:
    DeactivatePipelineRequestPrivate(const DataPipelineRequest::Action action,
                                   DeactivatePipelineRequest * const q);
    DeactivatePipelineRequestPrivate(const DeactivatePipelineRequestPrivate &other,
                                   DeactivatePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeactivatePipelineRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
