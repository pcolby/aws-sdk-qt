// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICWIDGETIMAGERESPONSE_H
#define QTAWS_GETMETRICWIDGETIMAGERESPONSE_H

#include "cloudwatchresponse.h"
#include "getmetricwidgetimagerequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricWidgetImageResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT GetMetricWidgetImageResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    GetMetricWidgetImageResponse(const GetMetricWidgetImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMetricWidgetImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricWidgetImageResponse)
    Q_DISABLE_COPY(GetMetricWidgetImageResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
