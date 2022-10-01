// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUSPENDCONTACTRECORDINGREQUEST_P_H
#define QTAWS_SUSPENDCONTACTRECORDINGREQUEST_P_H

#include "connectrequest_p.h"
#include "suspendcontactrecordingrequest.h"

namespace QtAws {
namespace Connect {

class SuspendContactRecordingRequest;

class SuspendContactRecordingRequestPrivate : public ConnectRequestPrivate {

public:
    SuspendContactRecordingRequestPrivate(const ConnectRequest::Action action,
                                   SuspendContactRecordingRequest * const q);
    SuspendContactRecordingRequestPrivate(const SuspendContactRecordingRequestPrivate &other,
                                   SuspendContactRecordingRequest * const q);

private:
    Q_DECLARE_PUBLIC(SuspendContactRecordingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
