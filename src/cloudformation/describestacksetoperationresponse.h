// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSETOPERATIONRESPONSE_H
#define QTAWS_DESCRIBESTACKSETOPERATIONRESPONSE_H

#include "cloudformationresponse.h"
#include "describestacksetoperationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackSetOperationResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackSetOperationResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeStackSetOperationResponse(const DescribeStackSetOperationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackSetOperationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackSetOperationResponse)
    Q_DISABLE_COPY(DescribeStackSetOperationResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
