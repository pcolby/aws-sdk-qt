// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESPEAKERRESPONSE_P_H
#define QTAWS_DELETESPEAKERRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class DeleteSpeakerResponse;

class DeleteSpeakerResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit DeleteSpeakerResponsePrivate(DeleteSpeakerResponse * const q);

    void parseDeleteSpeakerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSpeakerResponse)
    Q_DISABLE_COPY(DeleteSpeakerResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
