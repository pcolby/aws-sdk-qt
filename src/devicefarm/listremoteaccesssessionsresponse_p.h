// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREMOTEACCESSSESSIONSRESPONSE_P_H
#define QTAWS_LISTREMOTEACCESSSESSIONSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListRemoteAccessSessionsResponse;

class ListRemoteAccessSessionsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListRemoteAccessSessionsResponsePrivate(ListRemoteAccessSessionsResponse * const q);

    void parseListRemoteAccessSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRemoteAccessSessionsResponse)
    Q_DISABLE_COPY(ListRemoteAccessSessionsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
