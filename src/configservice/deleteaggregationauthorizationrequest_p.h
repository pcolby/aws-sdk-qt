// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGGREGATIONAUTHORIZATIONREQUEST_P_H
#define QTAWS_DELETEAGGREGATIONAUTHORIZATIONREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteaggregationauthorizationrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteAggregationAuthorizationRequest;

class DeleteAggregationAuthorizationRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteAggregationAuthorizationRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteAggregationAuthorizationRequest * const q);
    DeleteAggregationAuthorizationRequestPrivate(const DeleteAggregationAuthorizationRequestPrivate &other,
                                   DeleteAggregationAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAggregationAuthorizationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
