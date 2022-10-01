// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_H
#define QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationCloudWatchLoggingOptionRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT AddApplicationCloudWatchLoggingOptionRequest : public KinesisAnalyticsRequest {

public:
    AddApplicationCloudWatchLoggingOptionRequest(const AddApplicationCloudWatchLoggingOptionRequest &other);
    AddApplicationCloudWatchLoggingOptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationCloudWatchLoggingOptionRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
