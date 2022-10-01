// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTAINERINSTANCESREQUEST_H
#define QTAWS_DESCRIBECONTAINERINSTANCESREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeContainerInstancesRequestPrivate;

class QTAWSECS_EXPORT DescribeContainerInstancesRequest : public EcsRequest {

public:
    DescribeContainerInstancesRequest(const DescribeContainerInstancesRequest &other);
    DescribeContainerInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContainerInstancesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
