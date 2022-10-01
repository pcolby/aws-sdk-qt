// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDPROJECTSREQUEST_P_H
#define QTAWS_LISTTESTGRIDPROJECTSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listtestgridprojectsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridProjectsRequest;

class ListTestGridProjectsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListTestGridProjectsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListTestGridProjectsRequest * const q);
    ListTestGridProjectsRequestPrivate(const ListTestGridProjectsRequestPrivate &other,
                                   ListTestGridProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTestGridProjectsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
