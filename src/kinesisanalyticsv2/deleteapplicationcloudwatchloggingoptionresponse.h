// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_H
#define QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "deleteapplicationcloudwatchloggingoptionrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationCloudWatchLoggingOptionResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationCloudWatchLoggingOptionResponse : public KinesisAnalyticsV2Response {
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

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
