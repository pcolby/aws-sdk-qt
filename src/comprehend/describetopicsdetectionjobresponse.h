// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETOPICSDETECTIONJOBRESPONSE_H
#define QTAWS_DESCRIBETOPICSDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "describetopicsdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeTopicsDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeTopicsDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeTopicsDetectionJobResponse(const DescribeTopicsDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTopicsDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTopicsDetectionJobResponse)
    Q_DISABLE_COPY(DescribeTopicsDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
