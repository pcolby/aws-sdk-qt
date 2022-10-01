// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSDETECTIONJOBRESPONSE_H
#define QTAWS_DESCRIBEEVENTSDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "describeeventsdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEventsDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeEventsDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeEventsDetectionJobResponse(const DescribeEventsDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventsDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventsDetectionJobResponse)
    Q_DISABLE_COPY(DescribeEventsDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
