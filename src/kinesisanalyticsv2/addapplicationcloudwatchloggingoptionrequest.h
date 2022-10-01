// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_H
#define QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationCloudWatchLoggingOptionRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT AddApplicationCloudWatchLoggingOptionRequest : public KinesisAnalyticsV2Request {

public:
    AddApplicationCloudWatchLoggingOptionRequest(const AddApplicationCloudWatchLoggingOptionRequest &other);
    AddApplicationCloudWatchLoggingOptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationCloudWatchLoggingOptionRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
