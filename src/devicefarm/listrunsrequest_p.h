// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRUNSREQUEST_P_H
#define QTAWS_LISTRUNSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listrunsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListRunsRequest;

class ListRunsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListRunsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListRunsRequest * const q);
    ListRunsRequestPrivate(const ListRunsRequestPrivate &other,
                                   ListRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRunsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
