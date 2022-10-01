// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEWORKFLOWTYPEREQUEST_P_H
#define QTAWS_DEPRECATEWORKFLOWTYPEREQUEST_P_H

#include "swfrequest_p.h"
#include "deprecateworkflowtyperequest.h"

namespace QtAws {
namespace Swf {

class DeprecateWorkflowTypeRequest;

class DeprecateWorkflowTypeRequestPrivate : public SwfRequestPrivate {

public:
    DeprecateWorkflowTypeRequestPrivate(const SwfRequest::Action action,
                                   DeprecateWorkflowTypeRequest * const q);
    DeprecateWorkflowTypeRequestPrivate(const DeprecateWorkflowTypeRequestPrivate &other,
                                   DeprecateWorkflowTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeprecateWorkflowTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
