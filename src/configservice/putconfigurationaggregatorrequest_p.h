// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONAGGREGATORREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONAGGREGATORREQUEST_P_H

#include "configservicerequest_p.h"
#include "putconfigurationaggregatorrequest.h"

namespace QtAws {
namespace ConfigService {

class PutConfigurationAggregatorRequest;

class PutConfigurationAggregatorRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutConfigurationAggregatorRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutConfigurationAggregatorRequest * const q);
    PutConfigurationAggregatorRequestPrivate(const PutConfigurationAggregatorRequestPrivate &other,
                                   PutConfigurationAggregatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationAggregatorRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
