// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONRESPONSE_P_H
#define QTAWS_UPDATESUBSCRIPTIONRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class UpdateSubscriptionResponse;

class UpdateSubscriptionResponsePrivate : public ShieldResponsePrivate {

public:

    explicit UpdateSubscriptionResponsePrivate(UpdateSubscriptionResponse * const q);

    void parseUpdateSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSubscriptionResponse)
    Q_DISABLE_COPY(UpdateSubscriptionResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
