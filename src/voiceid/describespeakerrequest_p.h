// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPEAKERREQUEST_P_H
#define QTAWS_DESCRIBESPEAKERREQUEST_P_H

#include "voiceidrequest_p.h"
#include "describespeakerrequest.h"

namespace QtAws {
namespace VoiceId {

class DescribeSpeakerRequest;

class DescribeSpeakerRequestPrivate : public VoiceIdRequestPrivate {

public:
    DescribeSpeakerRequestPrivate(const VoiceIdRequest::Action action,
                                   DescribeSpeakerRequest * const q);
    DescribeSpeakerRequestPrivate(const DescribeSpeakerRequestPrivate &other,
                                   DescribeSpeakerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpeakerRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
