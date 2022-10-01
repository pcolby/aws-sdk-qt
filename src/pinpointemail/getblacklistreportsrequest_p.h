// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLACKLISTREPORTSREQUEST_P_H
#define QTAWS_GETBLACKLISTREPORTSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getblacklistreportsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetBlacklistReportsRequest;

class GetBlacklistReportsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetBlacklistReportsRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetBlacklistReportsRequest * const q);
    GetBlacklistReportsRequestPrivate(const GetBlacklistReportsRequestPrivate &other,
                                   GetBlacklistReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBlacklistReportsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
