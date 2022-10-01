// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMETRICSTREAMSREQUEST_H
#define QTAWS_STARTMETRICSTREAMSREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class StartMetricStreamsRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT StartMetricStreamsRequest : public CloudWatchRequest {

public:
    StartMetricStreamsRequest(const StartMetricStreamsRequest &other);
    StartMetricStreamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMetricStreamsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
