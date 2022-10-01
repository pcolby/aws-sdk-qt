// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIONTYPEREQUEST_P_H
#define QTAWS_GETACTIONTYPEREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "getactiontyperequest.h"

namespace QtAws {
namespace CodePipeline {

class GetActionTypeRequest;

class GetActionTypeRequestPrivate : public CodePipelineRequestPrivate {

public:
    GetActionTypeRequestPrivate(const CodePipelineRequest::Action action,
                                   GetActionTypeRequest * const q);
    GetActionTypeRequestPrivate(const GetActionTypeRequestPrivate &other,
                                   GetActionTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetActionTypeRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
