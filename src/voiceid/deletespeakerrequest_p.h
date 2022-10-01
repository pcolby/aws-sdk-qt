// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESPEAKERREQUEST_P_H
#define QTAWS_DELETESPEAKERREQUEST_P_H

#include "voiceidrequest_p.h"
#include "deletespeakerrequest.h"

namespace QtAws {
namespace VoiceId {

class DeleteSpeakerRequest;

class DeleteSpeakerRequestPrivate : public VoiceIdRequestPrivate {

public:
    DeleteSpeakerRequestPrivate(const VoiceIdRequest::Action action,
                                   DeleteSpeakerRequest * const q);
    DeleteSpeakerRequestPrivate(const DeleteSpeakerRequestPrivate &other,
                                   DeleteSpeakerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSpeakerRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
