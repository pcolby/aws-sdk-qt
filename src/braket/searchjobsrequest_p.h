// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHJOBSREQUEST_P_H
#define QTAWS_SEARCHJOBSREQUEST_P_H

#include "braketrequest_p.h"
#include "searchjobsrequest.h"

namespace QtAws {
namespace Braket {

class SearchJobsRequest;

class SearchJobsRequestPrivate : public BraketRequestPrivate {

public:
    SearchJobsRequestPrivate(const BraketRequest::Action action,
                                   SearchJobsRequest * const q);
    SearchJobsRequestPrivate(const SearchJobsRequestPrivate &other,
                                   SearchJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchJobsRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
