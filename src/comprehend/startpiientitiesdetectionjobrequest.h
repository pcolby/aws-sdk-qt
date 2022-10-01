// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIIENTITIESDETECTIONJOBREQUEST_H
#define QTAWS_STARTPIIENTITIESDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StartPiiEntitiesDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StartPiiEntitiesDetectionJobRequest : public ComprehendRequest {

public:
    StartPiiEntitiesDetectionJobRequest(const StartPiiEntitiesDetectionJobRequest &other);
    StartPiiEntitiesDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPiiEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
