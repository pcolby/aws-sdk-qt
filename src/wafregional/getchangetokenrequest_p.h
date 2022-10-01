// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENREQUEST_P_H
#define QTAWS_GETCHANGETOKENREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getchangetokenrequest.h"

namespace QtAws {
namespace WafRegional {

class GetChangeTokenRequest;

class GetChangeTokenRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetChangeTokenRequestPrivate(const WafRegionalRequest::Action action,
                                   GetChangeTokenRequest * const q);
    GetChangeTokenRequestPrivate(const GetChangeTokenRequestPrivate &other,
                                   GetChangeTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChangeTokenRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
