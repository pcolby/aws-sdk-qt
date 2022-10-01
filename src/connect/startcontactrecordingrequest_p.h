// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTACTRECORDINGREQUEST_P_H
#define QTAWS_STARTCONTACTRECORDINGREQUEST_P_H

#include "connectrequest_p.h"
#include "startcontactrecordingrequest.h"

namespace QtAws {
namespace Connect {

class StartContactRecordingRequest;

class StartContactRecordingRequestPrivate : public ConnectRequestPrivate {

public:
    StartContactRecordingRequestPrivate(const ConnectRequest::Action action,
                                   StartContactRecordingRequest * const q);
    StartContactRecordingRequestPrivate(const StartContactRecordingRequestPrivate &other,
                                   StartContactRecordingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartContactRecordingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
