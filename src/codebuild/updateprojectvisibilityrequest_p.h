// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTVISIBILITYREQUEST_P_H
#define QTAWS_UPDATEPROJECTVISIBILITYREQUEST_P_H

#include "codebuildrequest_p.h"
#include "updateprojectvisibilityrequest.h"

namespace QtAws {
namespace CodeBuild {

class UpdateProjectVisibilityRequest;

class UpdateProjectVisibilityRequestPrivate : public CodeBuildRequestPrivate {

public:
    UpdateProjectVisibilityRequestPrivate(const CodeBuildRequest::Action action,
                                   UpdateProjectVisibilityRequest * const q);
    UpdateProjectVisibilityRequestPrivate(const UpdateProjectVisibilityRequestPrivate &other,
                                   UpdateProjectVisibilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProjectVisibilityRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
