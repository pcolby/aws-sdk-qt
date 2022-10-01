// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTALREQUEST_P_H
#define QTAWS_DESCRIBEPORTALREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describeportalrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribePortalRequest;

class DescribePortalRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribePortalRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribePortalRequest * const q);
    DescribePortalRequestPrivate(const DescribePortalRequestPrivate &other,
                                   DescribePortalRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePortalRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
