// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_CREATEACCOUNTSUBSCRIPTIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateAccountSubscriptionResponse;

class CreateAccountSubscriptionResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateAccountSubscriptionResponsePrivate(CreateAccountSubscriptionResponse * const q);

    void parseCreateAccountSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccountSubscriptionResponse)
    Q_DISABLE_COPY(CreateAccountSubscriptionResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
