// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETOPICSDETECTIONJOBREQUEST_H
#define QTAWS_DESCRIBETOPICSDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeTopicsDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeTopicsDetectionJobRequest : public ComprehendRequest {

public:
    DescribeTopicsDetectionJobRequest(const DescribeTopicsDetectionJobRequest &other);
    DescribeTopicsDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTopicsDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
