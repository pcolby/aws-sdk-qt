// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGPROJECTREQUEST_P_H
#define QTAWS_TAGPROJECTREQUEST_P_H

#include "codestarrequest_p.h"
#include "tagprojectrequest.h"

namespace QtAws {
namespace CodeStar {

class TagProjectRequest;

class TagProjectRequestPrivate : public CodeStarRequestPrivate {

public:
    TagProjectRequestPrivate(const CodeStarRequest::Action action,
                                   TagProjectRequest * const q);
    TagProjectRequestPrivate(const TagProjectRequestPrivate &other,
                                   TagProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagProjectRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
