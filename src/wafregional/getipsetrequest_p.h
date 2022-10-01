// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPSETREQUEST_P_H
#define QTAWS_GETIPSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getipsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetIPSetRequest;

class GetIPSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetIPSetRequestPrivate(const WafRegionalRequest::Action action,
                                   GetIPSetRequest * const q);
    GetIPSetRequestPrivate(const GetIPSetRequestPrivate &other,
                                   GetIPSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIPSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
