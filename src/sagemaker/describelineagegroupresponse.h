// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELINEAGEGROUPRESPONSE_H
#define QTAWS_DESCRIBELINEAGEGROUPRESPONSE_H

#include "sagemakerresponse.h"
#include "describelineagegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeLineageGroupResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeLineageGroupResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeLineageGroupResponse(const DescribeLineageGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLineageGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLineageGroupResponse)
    Q_DISABLE_COPY(DescribeLineageGroupResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
