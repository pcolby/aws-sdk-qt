// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCONFORMANCEPACKDETAILEDSTATUSREQUEST_P_H
#define QTAWS_GETORGANIZATIONCONFORMANCEPACKDETAILEDSTATUSREQUEST_P_H

#include "configservicerequest_p.h"
#include "getorganizationconformancepackdetailedstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationConformancePackDetailedStatusRequest;

class GetOrganizationConformancePackDetailedStatusRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetOrganizationConformancePackDetailedStatusRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetOrganizationConformancePackDetailedStatusRequest * const q);
    GetOrganizationConformancePackDetailedStatusRequestPrivate(const GetOrganizationConformancePackDetailedStatusRequestPrivate &other,
                                   GetOrganizationConformancePackDetailedStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOrganizationConformancePackDetailedStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
