// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAYERSREQUEST_P_H
#define QTAWS_DESCRIBELAYERSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describelayersrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeLayersRequest;

class DescribeLayersRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeLayersRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeLayersRequest * const q);
    DescribeLayersRequestPrivate(const DescribeLayersRequestPrivate &other,
                                   DescribeLayersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLayersRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
