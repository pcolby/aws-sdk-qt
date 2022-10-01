// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUALIFICATIONREQUESTSREQUEST_P_H
#define QTAWS_LISTQUALIFICATIONREQUESTSREQUEST_P_H

#include "mturkrequest_p.h"
#include "listqualificationrequestsrequest.h"

namespace QtAws {
namespace MTurk {

class ListQualificationRequestsRequest;

class ListQualificationRequestsRequestPrivate : public MTurkRequestPrivate {

public:
    ListQualificationRequestsRequestPrivate(const MTurkRequest::Action action,
                                   ListQualificationRequestsRequest * const q);
    ListQualificationRequestsRequestPrivate(const ListQualificationRequestsRequestPrivate &other,
                                   ListQualificationRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQualificationRequestsRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
