// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISCOVERERREQUEST_P_H
#define QTAWS_UPDATEDISCOVERERREQUEST_P_H

#include "schemasrequest_p.h"
#include "updatediscovererrequest.h"

namespace QtAws {
namespace Schemas {

class UpdateDiscovererRequest;

class UpdateDiscovererRequestPrivate : public SchemasRequestPrivate {

public:
    UpdateDiscovererRequestPrivate(const SchemasRequest::Action action,
                                   UpdateDiscovererRequest * const q);
    UpdateDiscovererRequestPrivate(const UpdateDiscovererRequestPrivate &other,
                                   UpdateDiscovererRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
