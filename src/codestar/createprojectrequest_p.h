// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTREQUEST_P_H
#define QTAWS_CREATEPROJECTREQUEST_P_H

#include "codestarrequest_p.h"
#include "createprojectrequest.h"

namespace QtAws {
namespace CodeStar {

class CreateProjectRequest;

class CreateProjectRequestPrivate : public CodeStarRequestPrivate {

public:
    CreateProjectRequestPrivate(const CodeStarRequest::Action action,
                                   CreateProjectRequest * const q);
    CreateProjectRequestPrivate(const CreateProjectRequestPrivate &other,
                                   CreateProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProjectRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
