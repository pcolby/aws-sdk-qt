// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISCOVERERREQUEST_P_H
#define QTAWS_CREATEDISCOVERERREQUEST_P_H

#include "schemasrequest_p.h"
#include "creatediscovererrequest.h"

namespace QtAws {
namespace Schemas {

class CreateDiscovererRequest;

class CreateDiscovererRequestPrivate : public SchemasRequestPrivate {

public:
    CreateDiscovererRequestPrivate(const SchemasRequest::Action action,
                                   CreateDiscovererRequest * const q);
    CreateDiscovererRequestPrivate(const CreateDiscovererRequestPrivate &other,
                                   CreateDiscovererRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
