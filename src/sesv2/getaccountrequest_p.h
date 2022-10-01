// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTREQUEST_P_H
#define QTAWS_GETACCOUNTREQUEST_P_H

#include "sesv2request_p.h"
#include "getaccountrequest.h"

namespace QtAws {
namespace SESv2 {

class GetAccountRequest;

class GetAccountRequestPrivate : public SESv2RequestPrivate {

public:
    GetAccountRequestPrivate(const SESv2Request::Action action,
                                   GetAccountRequest * const q);
    GetAccountRequestPrivate(const GetAccountRequestPrivate &other,
                                   GetAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
