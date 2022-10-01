// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKSRESPONSE_H
#define QTAWS_DESCRIBECONFORMANCEPACKSRESPONSE_H

#include "configserviceresponse.h"
#include "describeconformancepacksrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePacksResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConformancePacksResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeConformancePacksResponse(const DescribeConformancePacksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConformancePacksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConformancePacksResponse)
    Q_DISABLE_COPY(DescribeConformancePacksResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
