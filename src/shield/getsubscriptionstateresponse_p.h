// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONSTATERESPONSE_P_H
#define QTAWS_GETSUBSCRIPTIONSTATERESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class GetSubscriptionStateResponse;

class GetSubscriptionStateResponsePrivate : public ShieldResponsePrivate {

public:

    explicit GetSubscriptionStateResponsePrivate(GetSubscriptionStateResponse * const q);

    void parseGetSubscriptionStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSubscriptionStateResponse)
    Q_DISABLE_COPY(GetSubscriptionStateResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
