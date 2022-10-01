// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKSTATUSRESPONSE_H
#define QTAWS_DESCRIBECONFORMANCEPACKSTATUSRESPONSE_H

#include "configserviceresponse.h"
#include "describeconformancepackstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePackStatusResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConformancePackStatusResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeConformancePackStatusResponse(const DescribeConformancePackStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConformancePackStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConformancePackStatusResponse)
    Q_DISABLE_COPY(DescribeConformancePackStatusResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
