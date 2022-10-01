// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECONTACTRECORDINGREQUEST_P_H
#define QTAWS_RESUMECONTACTRECORDINGREQUEST_P_H

#include "connectrequest_p.h"
#include "resumecontactrecordingrequest.h"

namespace QtAws {
namespace Connect {

class ResumeContactRecordingRequest;

class ResumeContactRecordingRequestPrivate : public ConnectRequestPrivate {

public:
    ResumeContactRecordingRequestPrivate(const ConnectRequest::Action action,
                                   ResumeContactRecordingRequest * const q);
    ResumeContactRecordingRequestPrivate(const ResumeContactRecordingRequestPrivate &other,
                                   ResumeContactRecordingRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResumeContactRecordingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
