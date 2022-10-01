// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSTATUSESRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSTATUSESRESPONSE_H

#include "configserviceresponse.h"
#include "describeorganizationconformancepackstatusesrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConformancePackStatusesResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeOrganizationConformancePackStatusesResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeOrganizationConformancePackStatusesResponse(const DescribeOrganizationConformancePackStatusesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationConformancePackStatusesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConformancePackStatusesResponse)
    Q_DISABLE_COPY(DescribeOrganizationConformancePackStatusesResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
