// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTSREQUEST_P_H
#define QTAWS_LISTDEPLOYMENTSREQUEST_P_H

#include "m2request_p.h"
#include "listdeploymentsrequest.h"

namespace QtAws {
namespace M2 {

class ListDeploymentsRequest;

class ListDeploymentsRequestPrivate : public M2RequestPrivate {

public:
    ListDeploymentsRequestPrivate(const M2Request::Action action,
                                   ListDeploymentsRequest * const q);
    ListDeploymentsRequestPrivate(const ListDeploymentsRequestPrivate &other,
                                   ListDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeploymentsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
