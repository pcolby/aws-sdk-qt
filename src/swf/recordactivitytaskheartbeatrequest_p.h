// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDACTIVITYTASKHEARTBEATREQUEST_P_H
#define QTAWS_RECORDACTIVITYTASKHEARTBEATREQUEST_P_H

#include "swfrequest_p.h"
#include "recordactivitytaskheartbeatrequest.h"

namespace QtAws {
namespace Swf {

class RecordActivityTaskHeartbeatRequest;

class RecordActivityTaskHeartbeatRequestPrivate : public SwfRequestPrivate {

public:
    RecordActivityTaskHeartbeatRequestPrivate(const SwfRequest::Action action,
                                   RecordActivityTaskHeartbeatRequest * const q);
    RecordActivityTaskHeartbeatRequestPrivate(const RecordActivityTaskHeartbeatRequestPrivate &other,
                                   RecordActivityTaskHeartbeatRequest * const q);

private:
    Q_DECLARE_PUBLIC(RecordActivityTaskHeartbeatRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
