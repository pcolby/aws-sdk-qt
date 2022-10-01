// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDAUTOMATIONSIGNALREQUEST_P_H
#define QTAWS_SENDAUTOMATIONSIGNALREQUEST_P_H

#include "ssmrequest_p.h"
#include "sendautomationsignalrequest.h"

namespace QtAws {
namespace Ssm {

class SendAutomationSignalRequest;

class SendAutomationSignalRequestPrivate : public SsmRequestPrivate {

public:
    SendAutomationSignalRequestPrivate(const SsmRequest::Action action,
                                   SendAutomationSignalRequest * const q);
    SendAutomationSignalRequestPrivate(const SendAutomationSignalRequestPrivate &other,
                                   SendAutomationSignalRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendAutomationSignalRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
