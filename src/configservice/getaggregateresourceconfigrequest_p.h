// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATERESOURCECONFIGREQUEST_P_H
#define QTAWS_GETAGGREGATERESOURCECONFIGREQUEST_P_H

#include "configservicerequest_p.h"
#include "getaggregateresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateResourceConfigRequest;

class GetAggregateResourceConfigRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetAggregateResourceConfigRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetAggregateResourceConfigRequest * const q);
    GetAggregateResourceConfigRequestPrivate(const GetAggregateResourceConfigRequestPrivate &other,
                                   GetAggregateResourceConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAggregateResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
