// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHQUEUESREQUEST_P_H
#define QTAWS_SEARCHQUEUESREQUEST_P_H

#include "connectrequest_p.h"
#include "searchqueuesrequest.h"

namespace QtAws {
namespace Connect {

class SearchQueuesRequest;

class SearchQueuesRequestPrivate : public ConnectRequestPrivate {

public:
    SearchQueuesRequestPrivate(const ConnectRequest::Action action,
                                   SearchQueuesRequest * const q);
    SearchQueuesRequestPrivate(const SearchQueuesRequestPrivate &other,
                                   SearchQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchQueuesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
