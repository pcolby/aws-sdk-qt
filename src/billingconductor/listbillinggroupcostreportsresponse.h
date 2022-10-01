// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBILLINGGROUPCOSTREPORTSRESPONSE_H
#define QTAWS_LISTBILLINGGROUPCOSTREPORTSRESPONSE_H

#include "billingconductorresponse.h"
#include "listbillinggroupcostreportsrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListBillingGroupCostReportsResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListBillingGroupCostReportsResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    ListBillingGroupCostReportsResponse(const ListBillingGroupCostReportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBillingGroupCostReportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBillingGroupCostReportsResponse)
    Q_DISABLE_COPY(ListBillingGroupCostReportsResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
