// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMLINEITEMRESPONSE_H
#define QTAWS_DELETECUSTOMLINEITEMRESPONSE_H

#include "billingconductorresponse.h"
#include "deletecustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class DeleteCustomLineItemResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DeleteCustomLineItemResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    DeleteCustomLineItemResponse(const DeleteCustomLineItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomLineItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomLineItemResponse)
    Q_DISABLE_COPY(DeleteCustomLineItemResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
