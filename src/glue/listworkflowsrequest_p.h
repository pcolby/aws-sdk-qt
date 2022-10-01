// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWSREQUEST_P_H
#define QTAWS_LISTWORKFLOWSREQUEST_P_H

#include "gluerequest_p.h"
#include "listworkflowsrequest.h"

namespace QtAws {
namespace Glue {

class ListWorkflowsRequest;

class ListWorkflowsRequestPrivate : public GlueRequestPrivate {

public:
    ListWorkflowsRequestPrivate(const GlueRequest::Action action,
                                   ListWorkflowsRequest * const q);
    ListWorkflowsRequestPrivate(const ListWorkflowsRequestPrivate &other,
                                   ListWorkflowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkflowsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
