// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITIESDETECTIONJOBRESPONSE_H
#define QTAWS_DESCRIBEENTITIESDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "describeentitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEntitiesDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeEntitiesDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeEntitiesDetectionJobResponse(const DescribeEntitiesDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEntitiesDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(DescribeEntitiesDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
