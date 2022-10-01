// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONRESPONSE_P_H
#define QTAWS_CREATESUBSCRIPTIONRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class CreateSubscriptionResponse;

class CreateSubscriptionResponsePrivate : public ShieldResponsePrivate {

public:

    explicit CreateSubscriptionResponsePrivate(CreateSubscriptionResponse * const q);

    void parseCreateSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSubscriptionResponse)
    Q_DISABLE_COPY(CreateSubscriptionResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
