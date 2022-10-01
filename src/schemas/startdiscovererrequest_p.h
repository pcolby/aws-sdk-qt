// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDISCOVERERREQUEST_P_H
#define QTAWS_STARTDISCOVERERREQUEST_P_H

#include "schemasrequest_p.h"
#include "startdiscovererrequest.h"

namespace QtAws {
namespace Schemas {

class StartDiscovererRequest;

class StartDiscovererRequestPrivate : public SchemasRequestPrivate {

public:
    StartDiscovererRequestPrivate(const SchemasRequest::Action action,
                                   StartDiscovererRequest * const q);
    StartDiscovererRequestPrivate(const StartDiscovererRequestPrivate &other,
                                   StartDiscovererRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
