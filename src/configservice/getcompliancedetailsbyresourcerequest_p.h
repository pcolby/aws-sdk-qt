// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILSBYRESOURCEREQUEST_P_H
#define QTAWS_GETCOMPLIANCEDETAILSBYRESOURCEREQUEST_P_H

#include "configservicerequest_p.h"
#include "getcompliancedetailsbyresourcerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceDetailsByResourceRequest;

class GetComplianceDetailsByResourceRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetComplianceDetailsByResourceRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetComplianceDetailsByResourceRequest * const q);
    GetComplianceDetailsByResourceRequestPrivate(const GetComplianceDetailsByResourceRequestPrivate &other,
                                   GetComplianceDetailsByResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComplianceDetailsByResourceRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
