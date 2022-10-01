// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMLINEITEMRESPONSE_H
#define QTAWS_UPDATECUSTOMLINEITEMRESPONSE_H

#include "billingconductorresponse.h"
#include "updatecustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class UpdateCustomLineItemResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT UpdateCustomLineItemResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    UpdateCustomLineItemResponse(const UpdateCustomLineItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCustomLineItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomLineItemResponse)
    Q_DISABLE_COPY(UpdateCustomLineItemResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
