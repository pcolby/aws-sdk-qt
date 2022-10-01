// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONEXCEPTIONSRESPONSE_H
#define QTAWS_DESCRIBEREMEDIATIONEXCEPTIONSRESPONSE_H

#include "configserviceresponse.h"
#include "describeremediationexceptionsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationExceptionsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeRemediationExceptionsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeRemediationExceptionsResponse(const DescribeRemediationExceptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRemediationExceptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRemediationExceptionsResponse)
    Q_DISABLE_COPY(DescribeRemediationExceptionsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
