// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELINEAGEGROUPREQUEST_H
#define QTAWS_DESCRIBELINEAGEGROUPREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeLineageGroupRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeLineageGroupRequest : public SageMakerRequest {

public:
    DescribeLineageGroupRequest(const DescribeLineageGroupRequest &other);
    DescribeLineageGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLineageGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
