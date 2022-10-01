// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKHEARTBEATREQUEST_P_H
#define QTAWS_SENDTASKHEARTBEATREQUEST_P_H

#include "sfnrequest_p.h"
#include "sendtaskheartbeatrequest.h"

namespace QtAws {
namespace Sfn {

class SendTaskHeartbeatRequest;

class SendTaskHeartbeatRequestPrivate : public SfnRequestPrivate {

public:
    SendTaskHeartbeatRequestPrivate(const SfnRequest::Action action,
                                   SendTaskHeartbeatRequest * const q);
    SendTaskHeartbeatRequestPrivate(const SendTaskHeartbeatRequestPrivate &other,
                                   SendTaskHeartbeatRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendTaskHeartbeatRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
