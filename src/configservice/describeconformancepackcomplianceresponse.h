// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKCOMPLIANCERESPONSE_H
#define QTAWS_DESCRIBECONFORMANCEPACKCOMPLIANCERESPONSE_H

#include "configserviceresponse.h"
#include "describeconformancepackcompliancerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePackComplianceResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConformancePackComplianceResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeConformancePackComplianceResponse(const DescribeConformancePackComplianceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConformancePackComplianceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConformancePackComplianceResponse)
    Q_DISABLE_COPY(DescribeConformancePackComplianceResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
