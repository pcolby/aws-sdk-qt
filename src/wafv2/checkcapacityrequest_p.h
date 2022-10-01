// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKCAPACITYREQUEST_P_H
#define QTAWS_CHECKCAPACITYREQUEST_P_H

#include "wafv2request_p.h"
#include "checkcapacityrequest.h"

namespace QtAws {
namespace Wafv2 {

class CheckCapacityRequest;

class CheckCapacityRequestPrivate : public Wafv2RequestPrivate {

public:
    CheckCapacityRequestPrivate(const Wafv2Request::Action action,
                                   CheckCapacityRequest * const q);
    CheckCapacityRequestPrivate(const CheckCapacityRequestPrivate &other,
                                   CheckCapacityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CheckCapacityRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
