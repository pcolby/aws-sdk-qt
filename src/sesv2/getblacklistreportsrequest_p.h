// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLACKLISTREPORTSREQUEST_P_H
#define QTAWS_GETBLACKLISTREPORTSREQUEST_P_H

#include "sesv2request_p.h"
#include "getblacklistreportsrequest.h"

namespace QtAws {
namespace SESv2 {

class GetBlacklistReportsRequest;

class GetBlacklistReportsRequestPrivate : public SESv2RequestPrivate {

public:
    GetBlacklistReportsRequestPrivate(const SESv2Request::Action action,
                                   GetBlacklistReportsRequest * const q);
    GetBlacklistReportsRequestPrivate(const GetBlacklistReportsRequestPrivate &other,
                                   GetBlacklistReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBlacklistReportsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
