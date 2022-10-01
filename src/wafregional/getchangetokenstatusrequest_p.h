// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENSTATUSREQUEST_P_H
#define QTAWS_GETCHANGETOKENSTATUSREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getchangetokenstatusrequest.h"

namespace QtAws {
namespace WafRegional {

class GetChangeTokenStatusRequest;

class GetChangeTokenStatusRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetChangeTokenStatusRequestPrivate(const WafRegionalRequest::Action action,
                                   GetChangeTokenStatusRequest * const q);
    GetChangeTokenStatusRequestPrivate(const GetChangeTokenStatusRequestPrivate &other,
                                   GetChangeTokenStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChangeTokenStatusRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
