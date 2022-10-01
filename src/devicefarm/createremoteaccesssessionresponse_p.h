// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREMOTEACCESSSESSIONRESPONSE_P_H
#define QTAWS_CREATEREMOTEACCESSSESSIONRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class CreateRemoteAccessSessionResponse;

class CreateRemoteAccessSessionResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit CreateRemoteAccessSessionResponsePrivate(CreateRemoteAccessSessionResponse * const q);

    void parseCreateRemoteAccessSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRemoteAccessSessionResponse)
    Q_DISABLE_COPY(CreateRemoteAccessSessionResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
