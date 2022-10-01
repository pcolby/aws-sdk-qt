// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTINUOUSEXPORTSREQUEST_P_H
#define QTAWS_DESCRIBECONTINUOUSEXPORTSREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "describecontinuousexportsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeContinuousExportsRequest;

class DescribeContinuousExportsRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    DescribeContinuousExportsRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   DescribeContinuousExportsRequest * const q);
    DescribeContinuousExportsRequestPrivate(const DescribeContinuousExportsRequestPrivate &other,
                                   DescribeContinuousExportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeContinuousExportsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
