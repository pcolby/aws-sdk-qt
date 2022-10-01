// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEATTACHMENTUPLOADREQUEST_P_H
#define QTAWS_COMPLETEATTACHMENTUPLOADREQUEST_P_H

#include "connectparticipantrequest_p.h"
#include "completeattachmentuploadrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class CompleteAttachmentUploadRequest;

class CompleteAttachmentUploadRequestPrivate : public ConnectParticipantRequestPrivate {

public:
    CompleteAttachmentUploadRequestPrivate(const ConnectParticipantRequest::Action action,
                                   CompleteAttachmentUploadRequest * const q);
    CompleteAttachmentUploadRequestPrivate(const CompleteAttachmentUploadRequestPrivate &other,
                                   CompleteAttachmentUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompleteAttachmentUploadRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
