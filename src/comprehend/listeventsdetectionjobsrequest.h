// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSDETECTIONJOBSREQUEST_H
#define QTAWS_LISTEVENTSDETECTIONJOBSREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEventsDetectionJobsRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ListEventsDetectionJobsRequest : public ComprehendRequest {

public:
    ListEventsDetectionJobsRequest(const ListEventsDetectionJobsRequest &other);
    ListEventsDetectionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventsDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
