// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEPASSWORDREQUEST_P_H
#define QTAWS_CHANGEPASSWORDREQUEST_P_H

#include "iamrequest_p.h"
#include "changepasswordrequest.h"

namespace QtAws {
namespace Iam {

class ChangePasswordRequest;

class ChangePasswordRequestPrivate : public IamRequestPrivate {

public:
    ChangePasswordRequestPrivate(const IamRequest::Action action,
                                   ChangePasswordRequest * const q);
    ChangePasswordRequestPrivate(const ChangePasswordRequestPrivate &other,
                                   ChangePasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChangePasswordRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
