// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPSETREQUEST_P_H
#define QTAWS_UPDATEIPSETREQUEST_P_H

#include "wafv2request_p.h"
#include "updateipsetrequest.h"

namespace QtAws {
namespace Wafv2 {

class UpdateIPSetRequest;

class UpdateIPSetRequestPrivate : public Wafv2RequestPrivate {

public:
    UpdateIPSetRequestPrivate(const Wafv2Request::Action action,
                                   UpdateIPSetRequest * const q);
    UpdateIPSetRequestPrivate(const UpdateIPSetRequestPrivate &other,
                                   UpdateIPSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIPSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
