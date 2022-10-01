// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBGPFAILOVERTESTRESPONSE_P_H
#define QTAWS_STARTBGPFAILOVERTESTRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class StartBgpFailoverTestResponse;

class StartBgpFailoverTestResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit StartBgpFailoverTestResponsePrivate(StartBgpFailoverTestResponse * const q);

    void parseStartBgpFailoverTestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartBgpFailoverTestResponse)
    Q_DISABLE_COPY(StartBgpFailoverTestResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
