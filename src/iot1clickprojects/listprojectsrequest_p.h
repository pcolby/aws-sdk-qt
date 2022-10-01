// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSREQUEST_P_H
#define QTAWS_LISTPROJECTSREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "listprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class ListProjectsRequest;

class ListProjectsRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    ListProjectsRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   ListProjectsRequest * const q);
    ListProjectsRequestPrivate(const ListProjectsRequestPrivate &other,
                                   ListProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProjectsRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
