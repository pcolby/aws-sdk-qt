// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGUSERREQUEST_P_H
#define QTAWS_UNTAGUSERREQUEST_P_H

#include "iamrequest_p.h"
#include "untaguserrequest.h"

namespace QtAws {
namespace Iam {

class UntagUserRequest;

class UntagUserRequestPrivate : public IamRequestPrivate {

public:
    UntagUserRequestPrivate(const IamRequest::Action action,
                                   UntagUserRequest * const q);
    UntagUserRequestPrivate(const UntagUserRequestPrivate &other,
                                   UntagUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagUserRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
