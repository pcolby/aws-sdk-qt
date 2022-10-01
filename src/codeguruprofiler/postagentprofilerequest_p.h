// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTAGENTPROFILEREQUEST_P_H
#define QTAWS_POSTAGENTPROFILEREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "postagentprofilerequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class PostAgentProfileRequest;

class PostAgentProfileRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    PostAgentProfileRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   PostAgentProfileRequest * const q);
    PostAgentProfileRequestPrivate(const PostAgentProfileRequestPrivate &other,
                                   PostAgentProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(PostAgentProfileRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
