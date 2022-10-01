// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDACCOUNTSFORORGANIZATIONRESPONSE_H
#define QTAWS_DESCRIBEAFFECTEDACCOUNTSFORORGANIZATIONRESPONSE_H

#include "healthresponse.h"
#include "describeaffectedaccountsfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeAffectedAccountsForOrganizationResponsePrivate;

class QTAWSHEALTH_EXPORT DescribeAffectedAccountsForOrganizationResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeAffectedAccountsForOrganizationResponse(const DescribeAffectedAccountsForOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAffectedAccountsForOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAffectedAccountsForOrganizationResponse)
    Q_DISABLE_COPY(DescribeAffectedAccountsForOrganizationResponse)

};

} // namespace Health
} // namespace QtAws

#endif
