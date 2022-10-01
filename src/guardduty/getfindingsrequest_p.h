// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREQUEST_P_H
#define QTAWS_GETFINDINGSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getfindingsrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetFindingsRequest;

class GetFindingsRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetFindingsRequestPrivate(const GuardDutyRequest::Action action,
                                   GetFindingsRequest * const q);
    GetFindingsRequestPrivate(const GetFindingsRequestPrivate &other,
                                   GetFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFindingsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
