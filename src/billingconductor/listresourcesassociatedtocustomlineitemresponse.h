// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESASSOCIATEDTOCUSTOMLINEITEMRESPONSE_H
#define QTAWS_LISTRESOURCESASSOCIATEDTOCUSTOMLINEITEMRESPONSE_H

#include "billingconductorresponse.h"
#include "listresourcesassociatedtocustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListResourcesAssociatedToCustomLineItemResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListResourcesAssociatedToCustomLineItemResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    ListResourcesAssociatedToCustomLineItemResponse(const ListResourcesAssociatedToCustomLineItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourcesAssociatedToCustomLineItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesAssociatedToCustomLineItemResponse)
    Q_DISABLE_COPY(ListResourcesAssociatedToCustomLineItemResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
