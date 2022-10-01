// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTWORKFLOWRUNPROPERTIESREQUEST_P_H
#define QTAWS_PUTWORKFLOWRUNPROPERTIESREQUEST_P_H

#include "gluerequest_p.h"
#include "putworkflowrunpropertiesrequest.h"

namespace QtAws {
namespace Glue {

class PutWorkflowRunPropertiesRequest;

class PutWorkflowRunPropertiesRequestPrivate : public GlueRequestPrivate {

public:
    PutWorkflowRunPropertiesRequestPrivate(const GlueRequest::Action action,
                                   PutWorkflowRunPropertiesRequest * const q);
    PutWorkflowRunPropertiesRequestPrivate(const PutWorkflowRunPropertiesRequestPrivate &other,
                                   PutWorkflowRunPropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutWorkflowRunPropertiesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
