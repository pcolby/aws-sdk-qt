// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTACTRECORDINGRESPONSE_P_H
#define QTAWS_STARTCONTACTRECORDINGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class StartContactRecordingResponse;

class StartContactRecordingResponsePrivate : public ConnectResponsePrivate {

public:

    explicit StartContactRecordingResponsePrivate(StartContactRecordingResponse * const q);

    void parseStartContactRecordingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartContactRecordingResponse)
    Q_DISABLE_COPY(StartContactRecordingResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
