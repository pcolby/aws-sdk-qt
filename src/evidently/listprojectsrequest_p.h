// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSREQUEST_P_H
#define QTAWS_LISTPROJECTSREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "listprojectsrequest.h"

namespace QtAws {
namespace Evidently {

class ListProjectsRequest;

class ListProjectsRequestPrivate : public EvidentlyRequestPrivate {

public:
    ListProjectsRequestPrivate(const EvidentlyRequest::Action action,
                                   ListProjectsRequest * const q);
    ListProjectsRequestPrivate(const ListProjectsRequestPrivate &other,
                                   ListProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProjectsRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
