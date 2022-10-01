// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIACAPTUREPIPELINEREQUEST_P_H
#define QTAWS_CREATEMEDIACAPTUREPIPELINEREQUEST_P_H

#include "chimerequest_p.h"
#include "createmediacapturepipelinerequest.h"

namespace QtAws {
namespace Chime {

class CreateMediaCapturePipelineRequest;

class CreateMediaCapturePipelineRequestPrivate : public ChimeRequestPrivate {

public:
    CreateMediaCapturePipelineRequestPrivate(const ChimeRequest::Action action,
                                   CreateMediaCapturePipelineRequest * const q);
    CreateMediaCapturePipelineRequestPrivate(const CreateMediaCapturePipelineRequestPrivate &other,
                                   CreateMediaCapturePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMediaCapturePipelineRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
