// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMACIESESSIONREQUEST_P_H
#define QTAWS_GETMACIESESSIONREQUEST_P_H

#include "macie2request_p.h"
#include "getmaciesessionrequest.h"

namespace QtAws {
namespace Macie2 {

class GetMacieSessionRequest;

class GetMacieSessionRequestPrivate : public Macie2RequestPrivate {

public:
    GetMacieSessionRequestPrivate(const Macie2Request::Action action,
                                   GetMacieSessionRequest * const q);
    GetMacieSessionRequestPrivate(const GetMacieSessionRequestPrivate &other,
                                   GetMacieSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMacieSessionRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
