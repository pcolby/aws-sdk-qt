// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSUBSCRIPTIONATTRIBUTESRESPONSE_P_H
#define QTAWS_SETSUBSCRIPTIONATTRIBUTESRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class SetSubscriptionAttributesResponse;

class SetSubscriptionAttributesResponsePrivate : public SnsResponsePrivate {

public:

    explicit SetSubscriptionAttributesResponsePrivate(SetSubscriptionAttributesResponse * const q);

    void parseSetSubscriptionAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetSubscriptionAttributesResponse)
    Q_DISABLE_COPY(SetSubscriptionAttributesResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
