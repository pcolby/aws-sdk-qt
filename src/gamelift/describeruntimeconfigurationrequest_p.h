// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERUNTIMECONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBERUNTIMECONFIGURATIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describeruntimeconfigurationrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeRuntimeConfigurationRequest;

class DescribeRuntimeConfigurationRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeRuntimeConfigurationRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeRuntimeConfigurationRequest * const q);
    DescribeRuntimeConfigurationRequestPrivate(const DescribeRuntimeConfigurationRequestPrivate &other,
                                   DescribeRuntimeConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRuntimeConfigurationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
