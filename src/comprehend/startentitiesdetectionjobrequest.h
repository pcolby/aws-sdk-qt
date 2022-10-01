// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENTITIESDETECTIONJOBREQUEST_H
#define QTAWS_STARTENTITIESDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StartEntitiesDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StartEntitiesDetectionJobRequest : public ComprehendRequest {

public:
    StartEntitiesDetectionJobRequest(const StartEntitiesDetectionJobRequest &other);
    StartEntitiesDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
