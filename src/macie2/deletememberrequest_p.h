// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERREQUEST_P_H
#define QTAWS_DELETEMEMBERREQUEST_P_H

#include "macie2request_p.h"
#include "deletememberrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteMemberRequest;

class DeleteMemberRequestPrivate : public Macie2RequestPrivate {

public:
    DeleteMemberRequestPrivate(const Macie2Request::Action action,
                                   DeleteMemberRequest * const q);
    DeleteMemberRequestPrivate(const DeleteMemberRequestPrivate &other,
                                   DeleteMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMemberRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
