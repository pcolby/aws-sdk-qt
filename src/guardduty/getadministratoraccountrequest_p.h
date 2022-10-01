// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMINISTRATORACCOUNTREQUEST_P_H
#define QTAWS_GETADMINISTRATORACCOUNTREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getadministratoraccountrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetAdministratorAccountRequest;

class GetAdministratorAccountRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetAdministratorAccountRequestPrivate(const GuardDutyRequest::Action action,
                                   GetAdministratorAccountRequest * const q);
    GetAdministratorAccountRequestPrivate(const GetAdministratorAccountRequestPrivate &other,
                                   GetAdministratorAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAdministratorAccountRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
