// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWOFFERINGREQUEST_P_H
#define QTAWS_RENEWOFFERINGREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "renewofferingrequest.h"

namespace QtAws {
namespace DeviceFarm {

class RenewOfferingRequest;

class RenewOfferingRequestPrivate : public DeviceFarmRequestPrivate {

public:
    RenewOfferingRequestPrivate(const DeviceFarmRequest::Action action,
                                   RenewOfferingRequest * const q);
    RenewOfferingRequestPrivate(const RenewOfferingRequestPrivate &other,
                                   RenewOfferingRequest * const q);

private:
    Q_DECLARE_PUBLIC(RenewOfferingRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
