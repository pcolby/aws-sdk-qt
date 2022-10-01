// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSREQUEST_P_H
#define QTAWS_LISTPROJECTSREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "listprojectsrequest.h"

namespace QtAws {
namespace LookoutVision {

class ListProjectsRequest;

class ListProjectsRequestPrivate : public LookoutVisionRequestPrivate {

public:
    ListProjectsRequestPrivate(const LookoutVisionRequest::Action action,
                                   ListProjectsRequest * const q);
    ListProjectsRequestPrivate(const ListProjectsRequestPrivate &other,
                                   ListProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProjectsRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
