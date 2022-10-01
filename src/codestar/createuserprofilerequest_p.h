// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPROFILEREQUEST_P_H
#define QTAWS_CREATEUSERPROFILEREQUEST_P_H

#include "codestarrequest_p.h"
#include "createuserprofilerequest.h"

namespace QtAws {
namespace CodeStar {

class CreateUserProfileRequest;

class CreateUserProfileRequestPrivate : public CodeStarRequestPrivate {

public:
    CreateUserProfileRequestPrivate(const CodeStarRequest::Action action,
                                   CreateUserProfileRequest * const q);
    CreateUserProfileRequestPrivate(const CreateUserProfileRequestPrivate &other,
                                   CreateUserProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUserProfileRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
