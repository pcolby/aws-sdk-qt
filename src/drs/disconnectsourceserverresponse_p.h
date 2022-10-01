// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTSOURCESERVERRESPONSE_P_H
#define QTAWS_DISCONNECTSOURCESERVERRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DisconnectSourceServerResponse;

class DisconnectSourceServerResponsePrivate : public DrsResponsePrivate {

public:

    explicit DisconnectSourceServerResponsePrivate(DisconnectSourceServerResponse * const q);

    void parseDisconnectSourceServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisconnectSourceServerResponse)
    Q_DISABLE_COPY(DisconnectSourceServerResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
