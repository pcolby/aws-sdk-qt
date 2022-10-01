// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPLICATIONREQUEST_H
#define QTAWS_STOPAPPLICATIONREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class StopApplicationRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT StopApplicationRequest : public KinesisAnalyticsRequest {

public:
    StopApplicationRequest(const StopApplicationRequest &other);
    StopApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopApplicationRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
