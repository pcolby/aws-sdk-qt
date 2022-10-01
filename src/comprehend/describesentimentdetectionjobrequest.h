// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESENTIMENTDETECTIONJOBREQUEST_H
#define QTAWS_DESCRIBESENTIMENTDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeSentimentDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeSentimentDetectionJobRequest : public ComprehendRequest {

public:
    DescribeSentimentDetectionJobRequest(const DescribeSentimentDetectionJobRequest &other);
    DescribeSentimentDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
