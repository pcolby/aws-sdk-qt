// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAILSREQUEST_P_H
#define QTAWS_LISTTRAILSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "listtrailsrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListTrailsRequest;

class ListTrailsRequestPrivate : public CloudTrailRequestPrivate {

public:
    ListTrailsRequestPrivate(const CloudTrailRequest::Action action,
                                   ListTrailsRequest * const q);
    ListTrailsRequestPrivate(const ListTrailsRequestPrivate &other,
                                   ListTrailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrailsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
