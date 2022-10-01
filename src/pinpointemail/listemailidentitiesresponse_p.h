// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEMAILIDENTITIESRESPONSE_P_H
#define QTAWS_LISTEMAILIDENTITIESRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class ListEmailIdentitiesResponse;

class ListEmailIdentitiesResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit ListEmailIdentitiesResponsePrivate(ListEmailIdentitiesResponse * const q);

    void parseListEmailIdentitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEmailIdentitiesResponse)
    Q_DISABLE_COPY(ListEmailIdentitiesResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
