// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGRULESREQUEST_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGRULESREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConfigRulesRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeOrganizationConfigRulesRequest : public ConfigServiceRequest {

public:
    DescribeOrganizationConfigRulesRequest(const DescribeOrganizationConfigRulesRequest &other);
    DescribeOrganizationConfigRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConfigRulesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
