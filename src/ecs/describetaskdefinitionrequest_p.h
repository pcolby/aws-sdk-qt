// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKDEFINITIONREQUEST_P_H
#define QTAWS_DESCRIBETASKDEFINITIONREQUEST_P_H

#include "ecsrequest_p.h"
#include "describetaskdefinitionrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeTaskDefinitionRequest;

class DescribeTaskDefinitionRequestPrivate : public EcsRequestPrivate {

public:
    DescribeTaskDefinitionRequestPrivate(const EcsRequest::Action action,
                                   DescribeTaskDefinitionRequest * const q);
    DescribeTaskDefinitionRequestPrivate(const DescribeTaskDefinitionRequestPrivate &other,
                                   DescribeTaskDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTaskDefinitionRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
