// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTRECORDINGREQUEST_P_H
#define QTAWS_STOPCONTACTRECORDINGREQUEST_P_H

#include "connectrequest_p.h"
#include "stopcontactrecordingrequest.h"

namespace QtAws {
namespace Connect {

class StopContactRecordingRequest;

class StopContactRecordingRequestPrivate : public ConnectRequestPrivate {

public:
    StopContactRecordingRequestPrivate(const ConnectRequest::Action action,
                                   StopContactRecordingRequest * const q);
    StopContactRecordingRequestPrivate(const StopContactRecordingRequestPrivate &other,
                                   StopContactRecordingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopContactRecordingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
