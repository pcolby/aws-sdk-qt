// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTREQUEST_P_H
#define QTAWS_UPDATEPROJECTREQUEST_P_H

#include "codebuildrequest_p.h"
#include "updateprojectrequest.h"

namespace QtAws {
namespace CodeBuild {

class UpdateProjectRequest;

class UpdateProjectRequestPrivate : public CodeBuildRequestPrivate {

public:
    UpdateProjectRequestPrivate(const CodeBuildRequest::Action action,
                                   UpdateProjectRequest * const q);
    UpdateProjectRequestPrivate(const UpdateProjectRequestPrivate &other,
                                   UpdateProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProjectRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
