// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMLINEITEMRESPONSE_H
#define QTAWS_CREATECUSTOMLINEITEMRESPONSE_H

#include "billingconductorresponse.h"
#include "createcustomlineitemrequest.h"

namespace QtAws {
namespace BillingConductor {

class CreateCustomLineItemResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT CreateCustomLineItemResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    CreateCustomLineItemResponse(const CreateCustomLineItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomLineItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomLineItemResponse)
    Q_DISABLE_COPY(CreateCustomLineItemResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
