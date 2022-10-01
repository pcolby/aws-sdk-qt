// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTUSERDATARESPONSE_P_H
#define QTAWS_GETCURRENTUSERDATARESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class GetCurrentUserDataResponse;

class GetCurrentUserDataResponsePrivate : public ConnectResponsePrivate {

public:

    explicit GetCurrentUserDataResponsePrivate(GetCurrentUserDataResponse * const q);

    void parseGetCurrentUserDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCurrentUserDataResponse)
    Q_DISABLE_COPY(GetCurrentUserDataResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
