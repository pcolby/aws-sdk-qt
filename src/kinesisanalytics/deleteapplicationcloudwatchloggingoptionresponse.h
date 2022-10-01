// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_H
#define QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_H

#include "kinesisanalyticsresponse.h"
#include "deleteapplicationcloudwatchloggingoptionrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationCloudWatchLoggingOptionResponsePrivate;

class QTAWSKINESISANALYTICS_EXPORT DeleteApplicationCloudWatchLoggingOptionResponse : public KinesisAnalyticsResponse {
    Q_OBJECT

public:
    DeleteApplicationCloudWatchLoggingOptionResponse(const DeleteApplicationCloudWatchLoggingOptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApplicationCloudWatchLoggingOptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationCloudWatchLoggingOptionResponse)
    Q_DISABLE_COPY(DeleteApplicationCloudWatchLoggingOptionResponse)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
