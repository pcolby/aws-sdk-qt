// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICSTREAMREQUEST_H
#define QTAWS_DELETEMETRICSTREAMREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteMetricStreamRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT DeleteMetricStreamRequest : public CloudWatchRequest {

public:
    DeleteMetricStreamRequest(const DeleteMetricStreamRequest &other);
    DeleteMetricStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMetricStreamRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
