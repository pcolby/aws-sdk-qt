// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPIIENTITIESDETECTIONJOBREQUEST_H
#define QTAWS_STOPPIIENTITIESDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StopPiiEntitiesDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StopPiiEntitiesDetectionJobRequest : public ComprehendRequest {

public:
    StopPiiEntitiesDetectionJobRequest(const StopPiiEntitiesDetectionJobRequest &other);
    StopPiiEntitiesDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopPiiEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
