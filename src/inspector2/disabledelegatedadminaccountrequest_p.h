// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDELEGATEDADMINACCOUNTREQUEST_P_H
#define QTAWS_DISABLEDELEGATEDADMINACCOUNTREQUEST_P_H

#include "inspector2request_p.h"
#include "disabledelegatedadminaccountrequest.h"

namespace QtAws {
namespace Inspector2 {

class DisableDelegatedAdminAccountRequest;

class DisableDelegatedAdminAccountRequestPrivate : public Inspector2RequestPrivate {

public:
    DisableDelegatedAdminAccountRequestPrivate(const Inspector2Request::Action action,
                                   DisableDelegatedAdminAccountRequest * const q);
    DisableDelegatedAdminAccountRequestPrivate(const DisableDelegatedAdminAccountRequestPrivate &other,
                                   DisableDelegatedAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableDelegatedAdminAccountRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
