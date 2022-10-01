// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPROFILEREQUEST_P_H
#define QTAWS_DELETEUSERPROFILEREQUEST_P_H

#include "codestarrequest_p.h"
#include "deleteuserprofilerequest.h"

namespace QtAws {
namespace CodeStar {

class DeleteUserProfileRequest;

class DeleteUserProfileRequestPrivate : public CodeStarRequestPrivate {

public:
    DeleteUserProfileRequestPrivate(const CodeStarRequest::Action action,
                                   DeleteUserProfileRequest * const q);
    DeleteUserProfileRequestPrivate(const DeleteUserProfileRequestPrivate &other,
                                   DeleteUserProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserProfileRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
