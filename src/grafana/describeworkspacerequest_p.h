// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEREQUEST_P_H
#define QTAWS_DESCRIBEWORKSPACEREQUEST_P_H

#include "grafanarequest_p.h"
#include "describeworkspacerequest.h"

namespace QtAws {
namespace Grafana {

class DescribeWorkspaceRequest;

class DescribeWorkspaceRequestPrivate : public GrafanaRequestPrivate {

public:
    DescribeWorkspaceRequestPrivate(const GrafanaRequest::Action action,
                                   DescribeWorkspaceRequest * const q);
    DescribeWorkspaceRequestPrivate(const DescribeWorkspaceRequestPrivate &other,
                                   DescribeWorkspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
