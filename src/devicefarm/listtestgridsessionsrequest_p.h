// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONSREQUEST_P_H
#define QTAWS_LISTTESTGRIDSESSIONSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listtestgridsessionsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionsRequest;

class ListTestGridSessionsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListTestGridSessionsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListTestGridSessionsRequest * const q);
    ListTestGridSessionsRequestPrivate(const ListTestGridSessionsRequestPrivate &other,
                                   ListTestGridSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTestGridSessionsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
