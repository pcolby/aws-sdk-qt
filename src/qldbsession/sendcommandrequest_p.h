// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCOMMANDREQUEST_P_H
#define QTAWS_SENDCOMMANDREQUEST_P_H

#include "qldbsessionrequest_p.h"
#include "sendcommandrequest.h"

namespace QtAws {
namespace QldbSession {

class SendCommandRequest;

class SendCommandRequestPrivate : public QldbSessionRequestPrivate {

public:
    SendCommandRequestPrivate(const QldbSessionRequest::Action action,
                                   SendCommandRequest * const q);
    SendCommandRequestPrivate(const SendCommandRequestPrivate &other,
                                   SendCommandRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendCommandRequest)

};

} // namespace QldbSession
} // namespace QtAws

#endif
