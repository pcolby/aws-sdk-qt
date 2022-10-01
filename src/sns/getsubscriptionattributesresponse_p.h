// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONATTRIBUTESRESPONSE_P_H
#define QTAWS_GETSUBSCRIPTIONATTRIBUTESRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class GetSubscriptionAttributesResponse;

class GetSubscriptionAttributesResponsePrivate : public SnsResponsePrivate {

public:

    explicit GetSubscriptionAttributesResponsePrivate(GetSubscriptionAttributesResponse * const q);

    void parseGetSubscriptionAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSubscriptionAttributesResponse)
    Q_DISABLE_COPY(GetSubscriptionAttributesResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
