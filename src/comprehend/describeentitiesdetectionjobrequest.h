// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITIESDETECTIONJOBREQUEST_H
#define QTAWS_DESCRIBEENTITIESDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEntitiesDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeEntitiesDetectionJobRequest : public ComprehendRequest {

public:
    DescribeEntitiesDetectionJobRequest(const DescribeEntitiesDetectionJobRequest &other);
    DescribeEntitiesDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
