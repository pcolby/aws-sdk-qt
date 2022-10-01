// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDACCOUNTSFORORGANIZATIONREQUEST_H
#define QTAWS_DESCRIBEAFFECTEDACCOUNTSFORORGANIZATIONREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class DescribeAffectedAccountsForOrganizationRequestPrivate;

class QTAWSHEALTH_EXPORT DescribeAffectedAccountsForOrganizationRequest : public HealthRequest {

public:
    DescribeAffectedAccountsForOrganizationRequest(const DescribeAffectedAccountsForOrganizationRequest &other);
    DescribeAffectedAccountsForOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAffectedAccountsForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
