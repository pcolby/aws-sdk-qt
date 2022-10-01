// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYPHRASESDETECTIONJOBREQUEST_H
#define QTAWS_DESCRIBEKEYPHRASESDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeKeyPhrasesDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeKeyPhrasesDetectionJobRequest : public ComprehendRequest {

public:
    DescribeKeyPhrasesDetectionJobRequest(const DescribeKeyPhrasesDetectionJobRequest &other);
    DescribeKeyPhrasesDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeKeyPhrasesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
