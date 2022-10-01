// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENSTATUSREQUEST_P_H
#define QTAWS_GETCHANGETOKENSTATUSREQUEST_P_H

#include "wafrequest_p.h"
#include "getchangetokenstatusrequest.h"

namespace QtAws {
namespace Waf {

class GetChangeTokenStatusRequest;

class GetChangeTokenStatusRequestPrivate : public WafRequestPrivate {

public:
    GetChangeTokenStatusRequestPrivate(const WafRequest::Action action,
                                   GetChangeTokenStatusRequest * const q);
    GetChangeTokenStatusRequestPrivate(const GetChangeTokenStatusRequestPrivate &other,
                                   GetChangeTokenStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChangeTokenStatusRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
