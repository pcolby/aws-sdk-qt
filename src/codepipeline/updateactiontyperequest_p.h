// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONTYPEREQUEST_P_H
#define QTAWS_UPDATEACTIONTYPEREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "updateactiontyperequest.h"

namespace QtAws {
namespace CodePipeline {

class UpdateActionTypeRequest;

class UpdateActionTypeRequestPrivate : public CodePipelineRequestPrivate {

public:
    UpdateActionTypeRequestPrivate(const CodePipelineRequest::Action action,
                                   UpdateActionTypeRequest * const q);
    UpdateActionTypeRequestPrivate(const UpdateActionTypeRequestPrivate &other,
                                   UpdateActionTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateActionTypeRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
