// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTREQUEST_P_H
#define QTAWS_DELETEPROJECTREQUEST_P_H

#include "codestarrequest_p.h"
#include "deleteprojectrequest.h"

namespace QtAws {
namespace CodeStar {

class DeleteProjectRequest;

class DeleteProjectRequestPrivate : public CodeStarRequestPrivate {

public:
    DeleteProjectRequestPrivate(const CodeStarRequest::Action action,
                                   DeleteProjectRequest * const q);
    DeleteProjectRequestPrivate(const DeleteProjectRequestPrivate &other,
                                   DeleteProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProjectRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
