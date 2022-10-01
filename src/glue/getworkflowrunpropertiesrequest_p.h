// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRUNPROPERTIESREQUEST_P_H
#define QTAWS_GETWORKFLOWRUNPROPERTIESREQUEST_P_H

#include "gluerequest_p.h"
#include "getworkflowrunpropertiesrequest.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRunPropertiesRequest;

class GetWorkflowRunPropertiesRequestPrivate : public GlueRequestPrivate {

public:
    GetWorkflowRunPropertiesRequestPrivate(const GlueRequest::Action action,
                                   GetWorkflowRunPropertiesRequest * const q);
    GetWorkflowRunPropertiesRequestPrivate(const GetWorkflowRunPropertiesRequestPrivate &other,
                                   GetWorkflowRunPropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkflowRunPropertiesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
