// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAGGREGATIONAUTHORIZATIONREQUEST_P_H
#define QTAWS_PUTAGGREGATIONAUTHORIZATIONREQUEST_P_H

#include "configservicerequest_p.h"
#include "putaggregationauthorizationrequest.h"

namespace QtAws {
namespace ConfigService {

class PutAggregationAuthorizationRequest;

class PutAggregationAuthorizationRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutAggregationAuthorizationRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutAggregationAuthorizationRequest * const q);
    PutAggregationAuthorizationRequestPrivate(const PutAggregationAuthorizationRequestPrivate &other,
                                   PutAggregationAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAggregationAuthorizationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
