// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTRECORDINGRESPONSE_P_H
#define QTAWS_STOPCONTACTRECORDINGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class StopContactRecordingResponse;

class StopContactRecordingResponsePrivate : public ConnectResponsePrivate {

public:

    explicit StopContactRecordingResponsePrivate(StopContactRecordingResponse * const q);

    void parseStopContactRecordingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopContactRecordingResponse)
    Q_DISABLE_COPY(StopContactRecordingResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
