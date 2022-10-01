// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESENTIMENTDETECTIONJOBRESPONSE_H
#define QTAWS_DESCRIBESENTIMENTDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "describesentimentdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeSentimentDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeSentimentDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeSentimentDetectionJobResponse(const DescribeSentimentDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSentimentDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSentimentDetectionJobResponse)
    Q_DISABLE_COPY(DescribeSentimentDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
