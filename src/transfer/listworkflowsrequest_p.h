// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWSREQUEST_P_H
#define QTAWS_LISTWORKFLOWSREQUEST_P_H

#include "transferrequest_p.h"
#include "listworkflowsrequest.h"

namespace QtAws {
namespace Transfer {

class ListWorkflowsRequest;

class ListWorkflowsRequestPrivate : public TransferRequestPrivate {

public:
    ListWorkflowsRequestPrivate(const TransferRequest::Action action,
                                   ListWorkflowsRequest * const q);
    ListWorkflowsRequestPrivate(const ListWorkflowsRequestPrivate &other,
                                   ListWorkflowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkflowsRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
