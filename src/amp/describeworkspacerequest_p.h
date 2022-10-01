// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEREQUEST_P_H
#define QTAWS_DESCRIBEWORKSPACEREQUEST_P_H

#include "amprequest_p.h"
#include "describeworkspacerequest.h"

namespace QtAws {
namespace Amp {

class DescribeWorkspaceRequest;

class DescribeWorkspaceRequestPrivate : public AmpRequestPrivate {

public:
    DescribeWorkspaceRequestPrivate(const AmpRequest::Action action,
                                   DescribeWorkspaceRequest * const q);
    DescribeWorkspaceRequestPrivate(const DescribeWorkspaceRequestPrivate &other,
                                   DescribeWorkspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
