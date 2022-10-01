// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTATTACHMENTUPLOADREQUEST_P_H
#define QTAWS_STARTATTACHMENTUPLOADREQUEST_P_H

#include "connectparticipantrequest_p.h"
#include "startattachmentuploadrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class StartAttachmentUploadRequest;

class StartAttachmentUploadRequestPrivate : public ConnectParticipantRequestPrivate {

public:
    StartAttachmentUploadRequestPrivate(const ConnectParticipantRequest::Action action,
                                   StartAttachmentUploadRequest * const q);
    StartAttachmentUploadRequestPrivate(const StartAttachmentUploadRequestPrivate &other,
                                   StartAttachmentUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAttachmentUploadRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
