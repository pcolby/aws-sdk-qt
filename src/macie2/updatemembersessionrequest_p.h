// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEMBERSESSIONREQUEST_P_H
#define QTAWS_UPDATEMEMBERSESSIONREQUEST_P_H

#include "macie2request_p.h"
#include "updatemembersessionrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateMemberSessionRequest;

class UpdateMemberSessionRequestPrivate : public Macie2RequestPrivate {

public:
    UpdateMemberSessionRequestPrivate(const Macie2Request::Action action,
                                   UpdateMemberSessionRequest * const q);
    UpdateMemberSessionRequestPrivate(const UpdateMemberSessionRequestPrivate &other,
                                   UpdateMemberSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMemberSessionRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
