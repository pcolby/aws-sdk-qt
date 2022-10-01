// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONCONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBEREMEDIATIONCONFIGURATIONSRESPONSE_H

#include "configserviceresponse.h"
#include "describeremediationconfigurationsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationConfigurationsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeRemediationConfigurationsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeRemediationConfigurationsResponse(const DescribeRemediationConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRemediationConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRemediationConfigurationsResponse)
    Q_DISABLE_COPY(DescribeRemediationConfigurationsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
