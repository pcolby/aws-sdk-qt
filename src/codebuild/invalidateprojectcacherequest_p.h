// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVALIDATEPROJECTCACHEREQUEST_P_H
#define QTAWS_INVALIDATEPROJECTCACHEREQUEST_P_H

#include "codebuildrequest_p.h"
#include "invalidateprojectcacherequest.h"

namespace QtAws {
namespace CodeBuild {

class InvalidateProjectCacheRequest;

class InvalidateProjectCacheRequestPrivate : public CodeBuildRequestPrivate {

public:
    InvalidateProjectCacheRequestPrivate(const CodeBuildRequest::Action action,
                                   InvalidateProjectCacheRequest * const q);
    InvalidateProjectCacheRequestPrivate(const InvalidateProjectCacheRequestPrivate &other,
                                   InvalidateProjectCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(InvalidateProjectCacheRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
