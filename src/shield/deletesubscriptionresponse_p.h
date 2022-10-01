// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DELETESUBSCRIPTIONRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DeleteSubscriptionResponse;

class DeleteSubscriptionResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DeleteSubscriptionResponsePrivate(DeleteSubscriptionResponse * const q);

    void parseDeleteSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSubscriptionResponse)
    Q_DISABLE_COPY(DeleteSubscriptionResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
