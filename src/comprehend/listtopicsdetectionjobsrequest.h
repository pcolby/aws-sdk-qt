// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICSDETECTIONJOBSREQUEST_H
#define QTAWS_LISTTOPICSDETECTIONJOBSREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ListTopicsDetectionJobsRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ListTopicsDetectionJobsRequest : public ComprehendRequest {

public:
    ListTopicsDetectionJobsRequest(const ListTopicsDetectionJobsRequest &other);
    ListTopicsDetectionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTopicsDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
