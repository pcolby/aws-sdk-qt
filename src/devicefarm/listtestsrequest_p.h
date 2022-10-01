// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTSREQUEST_P_H
#define QTAWS_LISTTESTSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listtestsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestsRequest;

class ListTestsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListTestsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListTestsRequest * const q);
    ListTestsRequestPrivate(const ListTestsRequestPrivate &other,
                                   ListTestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTestsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
