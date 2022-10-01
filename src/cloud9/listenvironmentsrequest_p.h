// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTSREQUEST_P_H
#define QTAWS_LISTENVIRONMENTSREQUEST_P_H

#include "cloud9request_p.h"
#include "listenvironmentsrequest.h"

namespace QtAws {
namespace Cloud9 {

class ListEnvironmentsRequest;

class ListEnvironmentsRequestPrivate : public Cloud9RequestPrivate {

public:
    ListEnvironmentsRequestPrivate(const Cloud9Request::Action action,
                                   ListEnvironmentsRequest * const q);
    ListEnvironmentsRequestPrivate(const ListEnvironmentsRequestPrivate &other,
                                   ListEnvironmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentsRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
