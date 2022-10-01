// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTOPICSDETECTIONJOBREQUEST_H
#define QTAWS_STARTTOPICSDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StartTopicsDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StartTopicsDetectionJobRequest : public ComprehendRequest {

public:
    StartTopicsDetectionJobRequest(const StartTopicsDetectionJobRequest &other);
    StartTopicsDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTopicsDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
