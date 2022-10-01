// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGRULESTATUSESRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGRULESTATUSESRESPONSE_H

#include "configserviceresponse.h"
#include "describeorganizationconfigrulestatusesrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConfigRuleStatusesResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeOrganizationConfigRuleStatusesResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeOrganizationConfigRuleStatusesResponse(const DescribeOrganizationConfigRuleStatusesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationConfigRuleStatusesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConfigRuleStatusesResponse)
    Q_DISABLE_COPY(DescribeOrganizationConfigRuleStatusesResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
