// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREMOTEACCESSSESSIONRESPONSE_P_H
#define QTAWS_GETREMOTEACCESSSESSIONRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetRemoteAccessSessionResponse;

class GetRemoteAccessSessionResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetRemoteAccessSessionResponsePrivate(GetRemoteAccessSessionResponse * const q);

    void parseGetRemoteAccessSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRemoteAccessSessionResponse)
    Q_DISABLE_COPY(GetRemoteAccessSessionResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
