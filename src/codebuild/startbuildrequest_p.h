// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBUILDREQUEST_P_H
#define QTAWS_STARTBUILDREQUEST_P_H

#include "codebuildrequest_p.h"
#include "startbuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class StartBuildRequest;

class StartBuildRequestPrivate : public CodeBuildRequestPrivate {

public:
    StartBuildRequestPrivate(const CodeBuildRequest::Action action,
                                   StartBuildRequest * const q);
    StartBuildRequestPrivate(const StartBuildRequestPrivate &other,
                                   StartBuildRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBuildRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
