// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERETENTIONCONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBERETENTIONCONFIGURATIONSRESPONSE_H

#include "configserviceresponse.h"
#include "describeretentionconfigurationsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRetentionConfigurationsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeRetentionConfigurationsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeRetentionConfigurationsResponse(const DescribeRetentionConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRetentionConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRetentionConfigurationsResponse)
    Q_DISABLE_COPY(DescribeRetentionConfigurationsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
