// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDELEGATEDADMINACCOUNTREQUEST_P_H
#define QTAWS_ENABLEDELEGATEDADMINACCOUNTREQUEST_P_H

#include "inspector2request_p.h"
#include "enabledelegatedadminaccountrequest.h"

namespace QtAws {
namespace Inspector2 {

class EnableDelegatedAdminAccountRequest;

class EnableDelegatedAdminAccountRequestPrivate : public Inspector2RequestPrivate {

public:
    EnableDelegatedAdminAccountRequestPrivate(const Inspector2Request::Action action,
                                   EnableDelegatedAdminAccountRequest * const q);
    EnableDelegatedAdminAccountRequestPrivate(const EnableDelegatedAdminAccountRequestPrivate &other,
                                   EnableDelegatedAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableDelegatedAdminAccountRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
