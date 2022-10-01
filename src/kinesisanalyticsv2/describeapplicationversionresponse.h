// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONVERSIONRESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONVERSIONRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "describeapplicationversionrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DescribeApplicationVersionResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DescribeApplicationVersionResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    DescribeApplicationVersionResponse(const DescribeApplicationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationVersionResponse)
    Q_DISABLE_COPY(DescribeApplicationVersionResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
