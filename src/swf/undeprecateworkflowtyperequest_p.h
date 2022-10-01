// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEWORKFLOWTYPEREQUEST_P_H
#define QTAWS_UNDEPRECATEWORKFLOWTYPEREQUEST_P_H

#include "swfrequest_p.h"
#include "undeprecateworkflowtyperequest.h"

namespace QtAws {
namespace Swf {

class UndeprecateWorkflowTypeRequest;

class UndeprecateWorkflowTypeRequestPrivate : public SwfRequestPrivate {

public:
    UndeprecateWorkflowTypeRequestPrivate(const SwfRequest::Action action,
                                   UndeprecateWorkflowTypeRequest * const q);
    UndeprecateWorkflowTypeRequestPrivate(const UndeprecateWorkflowTypeRequestPrivate &other,
                                   UndeprecateWorkflowTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UndeprecateWorkflowTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
