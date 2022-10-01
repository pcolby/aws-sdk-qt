// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYBUILDREQUEST_P_H
#define QTAWS_RETRYBUILDREQUEST_P_H

#include "codebuildrequest_p.h"
#include "retrybuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class RetryBuildRequest;

class RetryBuildRequestPrivate : public CodeBuildRequestPrivate {

public:
    RetryBuildRequestPrivate(const CodeBuildRequest::Action action,
                                   RetryBuildRequest * const q);
    RetryBuildRequestPrivate(const RetryBuildRequestPrivate &other,
                                   RetryBuildRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetryBuildRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
