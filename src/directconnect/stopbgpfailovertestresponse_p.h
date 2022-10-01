// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBGPFAILOVERTESTRESPONSE_P_H
#define QTAWS_STOPBGPFAILOVERTESTRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class StopBgpFailoverTestResponse;

class StopBgpFailoverTestResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit StopBgpFailoverTestResponsePrivate(StopBgpFailoverTestResponse * const q);

    void parseStopBgpFailoverTestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopBgpFailoverTestResponse)
    Q_DISABLE_COPY(StopBgpFailoverTestResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
