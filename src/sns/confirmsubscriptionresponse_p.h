// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_CONFIRMSUBSCRIPTIONRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class ConfirmSubscriptionResponse;

class ConfirmSubscriptionResponsePrivate : public SnsResponsePrivate {

public:

    explicit ConfirmSubscriptionResponsePrivate(ConfirmSubscriptionResponse * const q);

    void parseConfirmSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmSubscriptionResponse)
    Q_DISABLE_COPY(ConfirmSubscriptionResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
