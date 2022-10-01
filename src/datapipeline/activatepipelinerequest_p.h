// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEPIPELINEREQUEST_P_H
#define QTAWS_ACTIVATEPIPELINEREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "activatepipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class ActivatePipelineRequest;

class ActivatePipelineRequestPrivate : public DataPipelineRequestPrivate {

public:
    ActivatePipelineRequestPrivate(const DataPipelineRequest::Action action,
                                   ActivatePipelineRequest * const q);
    ActivatePipelineRequestPrivate(const ActivatePipelineRequestPrivate &other,
                                   ActivatePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(ActivatePipelineRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
