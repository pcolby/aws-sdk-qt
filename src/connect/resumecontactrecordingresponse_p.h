// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECONTACTRECORDINGRESPONSE_P_H
#define QTAWS_RESUMECONTACTRECORDINGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ResumeContactRecordingResponse;

class ResumeContactRecordingResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ResumeContactRecordingResponsePrivate(ResumeContactRecordingResponse * const q);

    void parseResumeContactRecordingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResumeContactRecordingResponse)
    Q_DISABLE_COPY(ResumeContactRecordingResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
