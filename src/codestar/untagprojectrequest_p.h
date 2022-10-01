// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGPROJECTREQUEST_P_H
#define QTAWS_UNTAGPROJECTREQUEST_P_H

#include "codestarrequest_p.h"
#include "untagprojectrequest.h"

namespace QtAws {
namespace CodeStar {

class UntagProjectRequest;

class UntagProjectRequestPrivate : public CodeStarRequestPrivate {

public:
    UntagProjectRequestPrivate(const CodeStarRequest::Action action,
                                   UntagProjectRequest * const q);
    UntagProjectRequestPrivate(const UntagProjectRequestPrivate &other,
                                   UntagProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagProjectRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
