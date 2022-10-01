// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBUILDREQUEST_P_H
#define QTAWS_STOPBUILDREQUEST_P_H

#include "codebuildrequest_p.h"
#include "stopbuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class StopBuildRequest;

class StopBuildRequestPrivate : public CodeBuildRequestPrivate {

public:
    StopBuildRequestPrivate(const CodeBuildRequest::Action action,
                                   StopBuildRequest * const q);
    StopBuildRequestPrivate(const StopBuildRequestPrivate &other,
                                   StopBuildRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopBuildRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
