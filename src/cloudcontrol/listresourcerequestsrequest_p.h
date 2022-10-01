// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEREQUESTSREQUEST_P_H
#define QTAWS_LISTRESOURCEREQUESTSREQUEST_P_H

#include "cloudcontrolrequest_p.h"
#include "listresourcerequestsrequest.h"

namespace QtAws {
namespace CloudControl {

class ListResourceRequestsRequest;

class ListResourceRequestsRequestPrivate : public CloudControlRequestPrivate {

public:
    ListResourceRequestsRequestPrivate(const CloudControlRequest::Action action,
                                   ListResourceRequestsRequest * const q);
    ListResourceRequestsRequestPrivate(const ListResourceRequestsRequestPrivate &other,
                                   ListResourceRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceRequestsRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
