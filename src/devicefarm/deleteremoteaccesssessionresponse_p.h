// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMOTEACCESSSESSIONRESPONSE_P_H
#define QTAWS_DELETEREMOTEACCESSSESSIONRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteRemoteAccessSessionResponse;

class DeleteRemoteAccessSessionResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit DeleteRemoteAccessSessionResponsePrivate(DeleteRemoteAccessSessionResponse * const q);

    void parseDeleteRemoteAccessSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRemoteAccessSessionResponse)
    Q_DISABLE_COPY(DeleteRemoteAccessSessionResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
