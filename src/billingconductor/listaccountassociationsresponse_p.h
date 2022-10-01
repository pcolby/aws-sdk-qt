// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTACCOUNTASSOCIATIONSRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class ListAccountAssociationsResponse;

class ListAccountAssociationsResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit ListAccountAssociationsResponsePrivate(ListAccountAssociationsResponse * const q);

    void parseListAccountAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountAssociationsResponse)
    Q_DISABLE_COPY(ListAccountAssociationsResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
