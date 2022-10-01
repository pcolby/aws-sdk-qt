// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMACTIONTYPEREQUEST_P_H
#define QTAWS_CREATECUSTOMACTIONTYPEREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "createcustomactiontyperequest.h"

namespace QtAws {
namespace CodePipeline {

class CreateCustomActionTypeRequest;

class CreateCustomActionTypeRequestPrivate : public CodePipelineRequestPrivate {

public:
    CreateCustomActionTypeRequestPrivate(const CodePipelineRequest::Action action,
                                   CreateCustomActionTypeRequest * const q);
    CreateCustomActionTypeRequestPrivate(const CreateCustomActionTypeRequestPrivate &other,
                                   CreateCustomActionTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomActionTypeRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
