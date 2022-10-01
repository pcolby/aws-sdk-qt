// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKSREQUEST_H
#define QTAWS_DESCRIBETASKSREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeTasksRequestPrivate;

class QTAWSECS_EXPORT DescribeTasksRequest : public EcsRequest {

public:
    DescribeTasksRequest(const DescribeTasksRequest &other);
    DescribeTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTasksRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
