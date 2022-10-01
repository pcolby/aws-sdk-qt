// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATUREGROUPRESPONSE_H
#define QTAWS_DESCRIBEFEATUREGROUPRESPONSE_H

#include "sagemakerresponse.h"
#include "describefeaturegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeFeatureGroupResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeFeatureGroupResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeFeatureGroupResponse(const DescribeFeatureGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFeatureGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFeatureGroupResponse)
    Q_DISABLE_COPY(DescribeFeatureGroupResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
