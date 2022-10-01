// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLASSIFICATIONJOBSREQUEST_P_H
#define QTAWS_LISTCLASSIFICATIONJOBSREQUEST_P_H

#include "macie2request_p.h"
#include "listclassificationjobsrequest.h"

namespace QtAws {
namespace Macie2 {

class ListClassificationJobsRequest;

class ListClassificationJobsRequestPrivate : public Macie2RequestPrivate {

public:
    ListClassificationJobsRequestPrivate(const Macie2Request::Action action,
                                   ListClassificationJobsRequest * const q);
    ListClassificationJobsRequestPrivate(const ListClassificationJobsRequestPrivate &other,
                                   ListClassificationJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListClassificationJobsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
