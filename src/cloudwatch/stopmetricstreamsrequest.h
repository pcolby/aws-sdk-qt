// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMETRICSTREAMSREQUEST_H
#define QTAWS_STOPMETRICSTREAMSREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class StopMetricStreamsRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT StopMetricStreamsRequest : public CloudWatchRequest {

public:
    StopMetricStreamsRequest(const StopMetricStreamsRequest &other);
    StopMetricStreamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMetricStreamsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
