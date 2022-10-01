// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSCRIPTRESPONSE_P_H
#define QTAWS_GETTRANSCRIPTRESPONSE_P_H

#include "connectparticipantresponse_p.h"

namespace QtAws {
namespace ConnectParticipant {

class GetTranscriptResponse;

class GetTranscriptResponsePrivate : public ConnectParticipantResponsePrivate {

public:

    explicit GetTranscriptResponsePrivate(GetTranscriptResponse * const q);

    void parseGetTranscriptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTranscriptResponse)
    Q_DISABLE_COPY(GetTranscriptResponsePrivate)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
