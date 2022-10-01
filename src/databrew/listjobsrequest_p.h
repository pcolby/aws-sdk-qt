// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSREQUEST_P_H
#define QTAWS_LISTJOBSREQUEST_P_H

#include "databrewrequest_p.h"
#include "listjobsrequest.h"

namespace QtAws {
namespace DataBrew {

class ListJobsRequest;

class ListJobsRequestPrivate : public DataBrewRequestPrivate {

public:
    ListJobsRequestPrivate(const DataBrewRequest::Action action,
                                   ListJobsRequest * const q);
    ListJobsRequestPrivate(const ListJobsRequestPrivate &other,
                                   ListJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJobsRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
