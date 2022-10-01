// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONREQUEST_P_H
#define QTAWS_PUTPERMISSIONREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "putpermissionrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class PutPermissionRequest;

class PutPermissionRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    PutPermissionRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   PutPermissionRequest * const q);
    PutPermissionRequestPrivate(const PutPermissionRequestPrivate &other,
                                   PutPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPermissionRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
