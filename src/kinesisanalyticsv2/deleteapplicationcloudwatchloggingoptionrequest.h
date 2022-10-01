// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_H
#define QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationCloudWatchLoggingOptionRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationCloudWatchLoggingOptionRequest : public KinesisAnalyticsV2Request {

public:
    DeleteApplicationCloudWatchLoggingOptionRequest(const DeleteApplicationCloudWatchLoggingOptionRequest &other);
    DeleteApplicationCloudWatchLoggingOptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationCloudWatchLoggingOptionRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
