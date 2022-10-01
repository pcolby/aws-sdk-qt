// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENTITIESDETECTIONJOBREQUEST_H
#define QTAWS_STOPENTITIESDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StopEntitiesDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StopEntitiesDetectionJobRequest : public ComprehendRequest {

public:
    StopEntitiesDetectionJobRequest(const StopEntitiesDetectionJobRequest &other);
    StopEntitiesDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
