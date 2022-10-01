// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDIACAPTUREPIPELINEREQUEST_P_H
#define QTAWS_DELETEMEDIACAPTUREPIPELINEREQUEST_P_H

#include "chimerequest_p.h"
#include "deletemediacapturepipelinerequest.h"

namespace QtAws {
namespace Chime {

class DeleteMediaCapturePipelineRequest;

class DeleteMediaCapturePipelineRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteMediaCapturePipelineRequestPrivate(const ChimeRequest::Action action,
                                   DeleteMediaCapturePipelineRequest * const q);
    DeleteMediaCapturePipelineRequestPrivate(const DeleteMediaCapturePipelineRequestPrivate &other,
                                   DeleteMediaCapturePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMediaCapturePipelineRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
