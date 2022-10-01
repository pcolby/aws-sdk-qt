// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPSETREQUEST_P_H
#define QTAWS_GETIPSETREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getipsetrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetIPSetRequest;

class GetIPSetRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetIPSetRequestPrivate(const GuardDutyRequest::Action action,
                                   GetIPSetRequest * const q);
    GetIPSetRequestPrivate(const GetIPSetRequestPrivate &other,
                                   GetIPSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIPSetRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
