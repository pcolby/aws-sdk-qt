// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGRULESRESPONSE_H
#define QTAWS_DESCRIBECONFIGRULESRESPONSE_H

#include "configserviceresponse.h"
#include "describeconfigrulesrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigRulesResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigRulesResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeConfigRulesResponse(const DescribeConfigRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigRulesResponse)
    Q_DISABLE_COPY(DescribeConfigRulesResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
