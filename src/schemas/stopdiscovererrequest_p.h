// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDISCOVERERREQUEST_P_H
#define QTAWS_STOPDISCOVERERREQUEST_P_H

#include "schemasrequest_p.h"
#include "stopdiscovererrequest.h"

namespace QtAws {
namespace Schemas {

class StopDiscovererRequest;

class StopDiscovererRequestPrivate : public SchemasRequestPrivate {

public:
    StopDiscovererRequestPrivate(const SchemasRequest::Action action,
                                   StopDiscovererRequest * const q);
    StopDiscovererRequestPrivate(const StopDiscovererRequestPrivate &other,
                                   StopDiscovererRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
