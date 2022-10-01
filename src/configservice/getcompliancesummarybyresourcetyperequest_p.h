// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYBYRESOURCETYPEREQUEST_P_H
#define QTAWS_GETCOMPLIANCESUMMARYBYRESOURCETYPEREQUEST_P_H

#include "configservicerequest_p.h"
#include "getcompliancesummarybyresourcetyperequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceSummaryByResourceTypeRequest;

class GetComplianceSummaryByResourceTypeRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetComplianceSummaryByResourceTypeRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetComplianceSummaryByResourceTypeRequest * const q);
    GetComplianceSummaryByResourceTypeRequestPrivate(const GetComplianceSummaryByResourceTypeRequestPrivate &other,
                                   GetComplianceSummaryByResourceTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComplianceSummaryByResourceTypeRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
