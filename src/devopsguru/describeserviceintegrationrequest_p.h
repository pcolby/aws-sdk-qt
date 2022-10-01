// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEINTEGRATIONREQUEST_P_H
#define QTAWS_DESCRIBESERVICEINTEGRATIONREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describeserviceintegrationrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeServiceIntegrationRequest;

class DescribeServiceIntegrationRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeServiceIntegrationRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeServiceIntegrationRequest * const q);
    DescribeServiceIntegrationRequestPrivate(const DescribeServiceIntegrationRequestPrivate &other,
                                   DescribeServiceIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServiceIntegrationRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
