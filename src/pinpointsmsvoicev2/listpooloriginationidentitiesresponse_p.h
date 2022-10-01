// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOOLORIGINATIONIDENTITIESRESPONSE_P_H
#define QTAWS_LISTPOOLORIGINATIONIDENTITIESRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class ListPoolOriginationIdentitiesResponse;

class ListPoolOriginationIdentitiesResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit ListPoolOriginationIdentitiesResponsePrivate(ListPoolOriginationIdentitiesResponse * const q);

    void parseListPoolOriginationIdentitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPoolOriginationIdentitiesResponse)
    Q_DISABLE_COPY(ListPoolOriginationIdentitiesResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
