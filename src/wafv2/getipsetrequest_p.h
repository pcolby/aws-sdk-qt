// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPSETREQUEST_P_H
#define QTAWS_GETIPSETREQUEST_P_H

#include "wafv2request_p.h"
#include "getipsetrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetIPSetRequest;

class GetIPSetRequestPrivate : public Wafv2RequestPrivate {

public:
    GetIPSetRequestPrivate(const Wafv2Request::Action action,
                                   GetIPSetRequest * const q);
    GetIPSetRequestPrivate(const GetIPSetRequestPrivate &other,
                                   GetIPSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIPSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
