// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTACHMENTREQUEST_P_H
#define QTAWS_GETATTACHMENTREQUEST_P_H

#include "connectparticipantrequest_p.h"
#include "getattachmentrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class GetAttachmentRequest;

class GetAttachmentRequestPrivate : public ConnectParticipantRequestPrivate {

public:
    GetAttachmentRequestPrivate(const ConnectParticipantRequest::Action action,
                                   GetAttachmentRequest * const q);
    GetAttachmentRequestPrivate(const GetAttachmentRequestPrivate &other,
                                   GetAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAttachmentRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
