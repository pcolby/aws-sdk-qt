// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGRULESTATUSESREQUEST_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGRULESTATUSESREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConfigRuleStatusesRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeOrganizationConfigRuleStatusesRequest : public ConfigServiceRequest {

public:
    DescribeOrganizationConfigRuleStatusesRequest(const DescribeOrganizationConfigRuleStatusesRequest &other);
    DescribeOrganizationConfigRuleStatusesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConfigRuleStatusesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
