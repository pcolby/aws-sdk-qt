// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDRTACCESSREQUEST_P_H
#define QTAWS_DESCRIBEDRTACCESSREQUEST_P_H

#include "shieldrequest_p.h"
#include "describedrtaccessrequest.h"

namespace QtAws {
namespace Shield {

class DescribeDRTAccessRequest;

class DescribeDRTAccessRequestPrivate : public ShieldRequestPrivate {

public:
    DescribeDRTAccessRequestPrivate(const ShieldRequest::Action action,
                                   DescribeDRTAccessRequest * const q);
    DescribeDRTAccessRequestPrivate(const DescribeDRTAccessRequestPrivate &other,
                                   DescribeDRTAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDRTAccessRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
