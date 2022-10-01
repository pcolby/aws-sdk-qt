// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIIENTITIESDETECTIONJOBREQUEST_H
#define QTAWS_DESCRIBEPIIENTITIESDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribePiiEntitiesDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribePiiEntitiesDetectionJobRequest : public ComprehendRequest {

public:
    DescribePiiEntitiesDetectionJobRequest(const DescribePiiEntitiesDetectionJobRequest &other);
    DescribePiiEntitiesDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePiiEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
