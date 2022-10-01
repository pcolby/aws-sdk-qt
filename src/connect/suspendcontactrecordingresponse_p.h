// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUSPENDCONTACTRECORDINGRESPONSE_P_H
#define QTAWS_SUSPENDCONTACTRECORDINGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class SuspendContactRecordingResponse;

class SuspendContactRecordingResponsePrivate : public ConnectResponsePrivate {

public:

    explicit SuspendContactRecordingResponsePrivate(SuspendContactRecordingResponse * const q);

    void parseSuspendContactRecordingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SuspendContactRecordingResponse)
    Q_DISABLE_COPY(SuspendContactRecordingResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
