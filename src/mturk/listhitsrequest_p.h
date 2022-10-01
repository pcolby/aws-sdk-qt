// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHITSREQUEST_P_H
#define QTAWS_LISTHITSREQUEST_P_H

#include "mturkrequest_p.h"
#include "listhitsrequest.h"

namespace QtAws {
namespace MTurk {

class ListHITsRequest;

class ListHITsRequestPrivate : public MTurkRequestPrivate {

public:
    ListHITsRequestPrivate(const MTurkRequest::Action action,
                                   ListHITsRequest * const q);
    ListHITsRequestPrivate(const ListHITsRequestPrivate &other,
                                   ListHITsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHITsRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
