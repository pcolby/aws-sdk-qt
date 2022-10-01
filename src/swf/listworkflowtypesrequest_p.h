// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWTYPESREQUEST_P_H
#define QTAWS_LISTWORKFLOWTYPESREQUEST_P_H

#include "swfrequest_p.h"
#include "listworkflowtypesrequest.h"

namespace QtAws {
namespace Swf {

class ListWorkflowTypesRequest;

class ListWorkflowTypesRequestPrivate : public SwfRequestPrivate {

public:
    ListWorkflowTypesRequestPrivate(const SwfRequest::Action action,
                                   ListWorkflowTypesRequest * const q);
    ListWorkflowTypesRequestPrivate(const ListWorkflowTypesRequestPrivate &other,
                                   ListWorkflowTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkflowTypesRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
