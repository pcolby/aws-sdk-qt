// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWORKFLOWTYPEREQUEST_P_H
#define QTAWS_REGISTERWORKFLOWTYPEREQUEST_P_H

#include "swfrequest_p.h"
#include "registerworkflowtyperequest.h"

namespace QtAws {
namespace Swf {

class RegisterWorkflowTypeRequest;

class RegisterWorkflowTypeRequestPrivate : public SwfRequestPrivate {

public:
    RegisterWorkflowTypeRequestPrivate(const SwfRequest::Action action,
                                   RegisterWorkflowTypeRequest * const q);
    RegisterWorkflowTypeRequestPrivate(const RegisterWorkflowTypeRequestPrivate &other,
                                   RegisterWorkflowTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterWorkflowTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
