// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMLINEITEMSRESPONSE_H
#define QTAWS_LISTCUSTOMLINEITEMSRESPONSE_H

#include "billingconductorresponse.h"
#include "listcustomlineitemsrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListCustomLineItemsResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListCustomLineItemsResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    ListCustomLineItemsResponse(const ListCustomLineItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomLineItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomLineItemsResponse)
    Q_DISABLE_COPY(ListCustomLineItemsResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
