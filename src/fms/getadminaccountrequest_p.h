// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMINACCOUNTREQUEST_P_H
#define QTAWS_GETADMINACCOUNTREQUEST_P_H

#include "fmsrequest_p.h"
#include "getadminaccountrequest.h"

namespace QtAws {
namespace Fms {

class GetAdminAccountRequest;

class GetAdminAccountRequestPrivate : public FmsRequestPrivate {

public:
    GetAdminAccountRequestPrivate(const FmsRequest::Action action,
                                   GetAdminAccountRequest * const q);
    GetAdminAccountRequestPrivate(const GetAdminAccountRequestPrivate &other,
                                   GetAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAdminAccountRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
