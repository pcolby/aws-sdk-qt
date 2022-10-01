// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTAGGREGATERESOURCECONFIGREQUEST_P_H
#define QTAWS_SELECTAGGREGATERESOURCECONFIGREQUEST_P_H

#include "configservicerequest_p.h"
#include "selectaggregateresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class SelectAggregateResourceConfigRequest;

class SelectAggregateResourceConfigRequestPrivate : public ConfigServiceRequestPrivate {

public:
    SelectAggregateResourceConfigRequestPrivate(const ConfigServiceRequest::Action action,
                                   SelectAggregateResourceConfigRequest * const q);
    SelectAggregateResourceConfigRequestPrivate(const SelectAggregateResourceConfigRequestPrivate &other,
                                   SelectAggregateResourceConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(SelectAggregateResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
