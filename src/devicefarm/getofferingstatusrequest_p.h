// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOFFERINGSTATUSREQUEST_P_H
#define QTAWS_GETOFFERINGSTATUSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getofferingstatusrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetOfferingStatusRequest;

class GetOfferingStatusRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetOfferingStatusRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetOfferingStatusRequest * const q);
    GetOfferingStatusRequestPrivate(const GetOfferingStatusRequestPrivate &other,
                                   GetOfferingStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOfferingStatusRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
