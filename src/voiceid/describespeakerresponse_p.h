// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPEAKERRESPONSE_P_H
#define QTAWS_DESCRIBESPEAKERRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class DescribeSpeakerResponse;

class DescribeSpeakerResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit DescribeSpeakerResponsePrivate(DescribeSpeakerResponse * const q);

    void parseDescribeSpeakerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSpeakerResponse)
    Q_DISABLE_COPY(DescribeSpeakerResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
