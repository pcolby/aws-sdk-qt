// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERSTATUSRESPONSE_P_H
#define QTAWS_PUTUSERSTATUSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class PutUserStatusResponse;

class PutUserStatusResponsePrivate : public ConnectResponsePrivate {

public:

    explicit PutUserStatusResponsePrivate(PutUserStatusResponse * const q);

    void parsePutUserStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutUserStatusResponse)
    Q_DISABLE_COPY(PutUserStatusResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
