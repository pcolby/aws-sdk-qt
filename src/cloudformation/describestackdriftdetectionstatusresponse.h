// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKDRIFTDETECTIONSTATUSRESPONSE_H
#define QTAWS_DESCRIBESTACKDRIFTDETECTIONSTATUSRESPONSE_H

#include "cloudformationresponse.h"
#include "describestackdriftdetectionstatusrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackDriftDetectionStatusResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackDriftDetectionStatusResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeStackDriftDetectionStatusResponse(const DescribeStackDriftDetectionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackDriftDetectionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackDriftDetectionStatusResponse)
    Q_DISABLE_COPY(DescribeStackDriftDetectionStatusResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
