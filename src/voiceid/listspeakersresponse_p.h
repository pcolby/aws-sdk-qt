// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEAKERSRESPONSE_P_H
#define QTAWS_LISTSPEAKERSRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class ListSpeakersResponse;

class ListSpeakersResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit ListSpeakersResponsePrivate(ListSpeakersResponse * const q);

    void parseListSpeakersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSpeakersResponse)
    Q_DISABLE_COPY(ListSpeakersResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
