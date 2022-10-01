// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKESCREENAUTOMATIONREQUEST_P_H
#define QTAWS_INVOKESCREENAUTOMATIONREQUEST_P_H

#include "honeycoderequest_p.h"
#include "invokescreenautomationrequest.h"

namespace QtAws {
namespace Honeycode {

class InvokeScreenAutomationRequest;

class InvokeScreenAutomationRequestPrivate : public HoneycodeRequestPrivate {

public:
    InvokeScreenAutomationRequestPrivate(const HoneycodeRequest::Action action,
                                   InvokeScreenAutomationRequest * const q);
    InvokeScreenAutomationRequestPrivate(const InvokeScreenAutomationRequestPrivate &other,
                                   InvokeScreenAutomationRequest * const q);

private:
    Q_DECLARE_PUBLIC(InvokeScreenAutomationRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
