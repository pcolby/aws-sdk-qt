// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCOMMANDREQUEST_P_H
#define QTAWS_SENDCOMMANDREQUEST_P_H

#include "ssmrequest_p.h"
#include "sendcommandrequest.h"

namespace QtAws {
namespace Ssm {

class SendCommandRequest;

class SendCommandRequestPrivate : public SsmRequestPrivate {

public:
    SendCommandRequestPrivate(const SsmRequest::Action action,
                                   SendCommandRequest * const q);
    SendCommandRequestPrivate(const SendCommandRequestPrivate &other,
                                   SendCommandRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendCommandRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
