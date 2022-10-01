// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSCRIPTREQUEST_P_H
#define QTAWS_GETTRANSCRIPTREQUEST_P_H

#include "connectparticipantrequest_p.h"
#include "gettranscriptrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class GetTranscriptRequest;

class GetTranscriptRequestPrivate : public ConnectParticipantRequestPrivate {

public:
    GetTranscriptRequestPrivate(const ConnectParticipantRequest::Action action,
                                   GetTranscriptRequest * const q);
    GetTranscriptRequestPrivate(const GetTranscriptRequestPrivate &other,
                                   GetTranscriptRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTranscriptRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
