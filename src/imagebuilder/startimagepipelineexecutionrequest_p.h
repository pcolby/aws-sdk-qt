// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGEPIPELINEEXECUTIONREQUEST_P_H
#define QTAWS_STARTIMAGEPIPELINEEXECUTIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "startimagepipelineexecutionrequest.h"

namespace QtAws {
namespace ImageBuilder {

class StartImagePipelineExecutionRequest;

class StartImagePipelineExecutionRequestPrivate : public ImageBuilderRequestPrivate {

public:
    StartImagePipelineExecutionRequestPrivate(const ImageBuilderRequest::Action action,
                                   StartImagePipelineExecutionRequest * const q);
    StartImagePipelineExecutionRequestPrivate(const StartImagePipelineExecutionRequestPrivate &other,
                                   StartImagePipelineExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartImagePipelineExecutionRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
