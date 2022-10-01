// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTUSERRESPONSE_P_H
#define QTAWS_DISCONNECTUSERRESPONSE_P_H

#include "ivschatresponse_p.h"

namespace QtAws {
namespace IvsChat {

class DisconnectUserResponse;

class DisconnectUserResponsePrivate : public IvsChatResponsePrivate {

public:

    explicit DisconnectUserResponsePrivate(DisconnectUserResponse * const q);

    void parseDisconnectUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisconnectUserResponse)
    Q_DISABLE_COPY(DisconnectUserResponsePrivate)

};

} // namespace IvsChat
} // namespace QtAws

#endif
