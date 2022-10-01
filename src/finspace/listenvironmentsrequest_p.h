// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTSREQUEST_P_H
#define QTAWS_LISTENVIRONMENTSREQUEST_P_H

#include "finspacerequest_p.h"
#include "listenvironmentsrequest.h"

namespace QtAws {
namespace Finspace {

class ListEnvironmentsRequest;

class ListEnvironmentsRequestPrivate : public FinspaceRequestPrivate {

public:
    ListEnvironmentsRequestPrivate(const FinspaceRequest::Action action,
                                   ListEnvironmentsRequest * const q);
    ListEnvironmentsRequestPrivate(const ListEnvironmentsRequestPrivate &other,
                                   ListEnvironmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentsRequest)

};

} // namespace Finspace
} // namespace QtAws

#endif
