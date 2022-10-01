// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERREQUEST_P_H
#define QTAWS_CREATEMEMBERREQUEST_P_H

#include "macie2request_p.h"
#include "creatememberrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateMemberRequest;

class CreateMemberRequestPrivate : public Macie2RequestPrivate {

public:
    CreateMemberRequestPrivate(const Macie2Request::Action action,
                                   CreateMemberRequest * const q);
    CreateMemberRequestPrivate(const CreateMemberRequestPrivate &other,
                                   CreateMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMemberRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
