// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGRULESRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGRULESRESPONSE_H

#include "configserviceresponse.h"
#include "describeorganizationconfigrulesrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConfigRulesResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeOrganizationConfigRulesResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeOrganizationConfigRulesResponse(const DescribeOrganizationConfigRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationConfigRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConfigRulesResponse)
    Q_DISABLE_COPY(DescribeOrganizationConfigRulesResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
