// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEAKERSREQUEST_P_H
#define QTAWS_LISTSPEAKERSREQUEST_P_H

#include "voiceidrequest_p.h"
#include "listspeakersrequest.h"

namespace QtAws {
namespace VoiceId {

class ListSpeakersRequest;

class ListSpeakersRequestPrivate : public VoiceIdRequestPrivate {

public:
    ListSpeakersRequestPrivate(const VoiceIdRequest::Action action,
                                   ListSpeakersRequest * const q);
    ListSpeakersRequestPrivate(const ListSpeakersRequestPrivate &other,
                                   ListSpeakersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSpeakersRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
