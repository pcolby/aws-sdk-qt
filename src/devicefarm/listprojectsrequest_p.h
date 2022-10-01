// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSREQUEST_P_H
#define QTAWS_LISTPROJECTSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listprojectsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListProjectsRequest;

class ListProjectsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListProjectsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListProjectsRequest * const q);
    ListProjectsRequestPrivate(const ListProjectsRequestPrivate &other,
                                   ListProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProjectsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
