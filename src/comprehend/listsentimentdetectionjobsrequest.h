// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSENTIMENTDETECTIONJOBSREQUEST_H
#define QTAWS_LISTSENTIMENTDETECTIONJOBSREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ListSentimentDetectionJobsRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ListSentimentDetectionJobsRequest : public ComprehendRequest {

public:
    ListSentimentDetectionJobsRequest(const ListSentimentDetectionJobsRequest &other);
    ListSentimentDetectionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSentimentDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
