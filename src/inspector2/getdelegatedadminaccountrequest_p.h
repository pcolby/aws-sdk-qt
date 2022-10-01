// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELEGATEDADMINACCOUNTREQUEST_P_H
#define QTAWS_GETDELEGATEDADMINACCOUNTREQUEST_P_H

#include "inspector2request_p.h"
#include "getdelegatedadminaccountrequest.h"

namespace QtAws {
namespace Inspector2 {

class GetDelegatedAdminAccountRequest;

class GetDelegatedAdminAccountRequestPrivate : public Inspector2RequestPrivate {

public:
    GetDelegatedAdminAccountRequestPrivate(const Inspector2Request::Action action,
                                   GetDelegatedAdminAccountRequest * const q);
    GetDelegatedAdminAccountRequestPrivate(const GetDelegatedAdminAccountRequestPrivate &other,
                                   GetDelegatedAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDelegatedAdminAccountRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
