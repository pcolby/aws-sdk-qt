// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEPLOYMENTJOBRESPONSE_H
#define QTAWS_DESCRIBEDEPLOYMENTJOBRESPONSE_H

#include "robomakerresponse.h"
#include "describedeploymentjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeDeploymentJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT DescribeDeploymentJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DescribeDeploymentJobResponse(const DescribeDeploymentJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDeploymentJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeploymentJobResponse)
    Q_DISABLE_COPY(DescribeDeploymentJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
