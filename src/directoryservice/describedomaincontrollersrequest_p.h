// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONTROLLERSREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINCONTROLLERSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describedomaincontrollersrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeDomainControllersRequest;

class DescribeDomainControllersRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeDomainControllersRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeDomainControllersRequest * const q);
    DescribeDomainControllersRequestPrivate(const DescribeDomainControllersRequestPrivate &other,
                                   DescribeDomainControllersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainControllersRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
