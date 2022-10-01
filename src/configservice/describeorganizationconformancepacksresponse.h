// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSRESPONSE_H

#include "configserviceresponse.h"
#include "describeorganizationconformancepacksrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConformancePacksResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeOrganizationConformancePacksResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeOrganizationConformancePacksResponse(const DescribeOrganizationConformancePacksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationConformancePacksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConformancePacksResponse)
    Q_DISABLE_COPY(DescribeOrganizationConformancePacksResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
