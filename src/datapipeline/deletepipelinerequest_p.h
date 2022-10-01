// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPIPELINEREQUEST_P_H
#define QTAWS_DELETEPIPELINEREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "deletepipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class DeletePipelineRequest;

class DeletePipelineRequestPrivate : public DataPipelineRequestPrivate {

public:
    DeletePipelineRequestPrivate(const DataPipelineRequest::Action action,
                                   DeletePipelineRequest * const q);
    DeletePipelineRequestPrivate(const DeletePipelineRequestPrivate &other,
                                   DeletePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePipelineRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
