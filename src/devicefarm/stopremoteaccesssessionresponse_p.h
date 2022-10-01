// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREMOTEACCESSSESSIONRESPONSE_P_H
#define QTAWS_STOPREMOTEACCESSSESSIONRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class StopRemoteAccessSessionResponse;

class StopRemoteAccessSessionResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit StopRemoteAccessSessionResponsePrivate(StopRemoteAccessSessionResponse * const q);

    void parseStopRemoteAccessSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopRemoteAccessSessionResponse)
    Q_DISABLE_COPY(StopRemoteAccessSessionResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
