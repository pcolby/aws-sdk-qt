// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITESREQUEST_P_H
#define QTAWS_LISTSUITESREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listsuitesrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListSuitesRequest;

class ListSuitesRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListSuitesRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListSuitesRequest * const q);
    ListSuitesRequestPrivate(const ListSuitesRequestPrivate &other,
                                   ListSuitesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSuitesRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
