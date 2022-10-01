// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAGGREGATERESOURCECONFIGREQUEST_P_H
#define QTAWS_BATCHGETAGGREGATERESOURCECONFIGREQUEST_P_H

#include "configservicerequest_p.h"
#include "batchgetaggregateresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class BatchGetAggregateResourceConfigRequest;

class BatchGetAggregateResourceConfigRequestPrivate : public ConfigServiceRequestPrivate {

public:
    BatchGetAggregateResourceConfigRequestPrivate(const ConfigServiceRequest::Action action,
                                   BatchGetAggregateResourceConfigRequest * const q);
    BatchGetAggregateResourceConfigRequestPrivate(const BatchGetAggregateResourceConfigRequestPrivate &other,
                                   BatchGetAggregateResourceConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetAggregateResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
