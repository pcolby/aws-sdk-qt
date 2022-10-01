// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMACTIONTYPEREQUEST_P_H
#define QTAWS_DELETECUSTOMACTIONTYPEREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "deletecustomactiontyperequest.h"

namespace QtAws {
namespace CodePipeline {

class DeleteCustomActionTypeRequest;

class DeleteCustomActionTypeRequestPrivate : public CodePipelineRequestPrivate {

public:
    DeleteCustomActionTypeRequestPrivate(const CodePipelineRequest::Action action,
                                   DeleteCustomActionTypeRequest * const q);
    DeleteCustomActionTypeRequestPrivate(const DeleteCustomActionTypeRequestPrivate &other,
                                   DeleteCustomActionTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomActionTypeRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
