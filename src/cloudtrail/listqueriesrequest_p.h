// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERIESREQUEST_P_H
#define QTAWS_LISTQUERIESREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "listqueriesrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListQueriesRequest;

class ListQueriesRequestPrivate : public CloudTrailRequestPrivate {

public:
    ListQueriesRequestPrivate(const CloudTrailRequest::Action action,
                                   ListQueriesRequest * const q);
    ListQueriesRequestPrivate(const ListQueriesRequestPrivate &other,
                                   ListQueriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQueriesRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
