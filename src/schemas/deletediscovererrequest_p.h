// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISCOVERERREQUEST_P_H
#define QTAWS_DELETEDISCOVERERREQUEST_P_H

#include "schemasrequest_p.h"
#include "deletediscovererrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteDiscovererRequest;

class DeleteDiscovererRequestPrivate : public SchemasRequestPrivate {

public:
    DeleteDiscovererRequestPrivate(const SchemasRequest::Action action,
                                   DeleteDiscovererRequest * const q);
    DeleteDiscovererRequestPrivate(const DeleteDiscovererRequestPrivate &other,
                                   DeleteDiscovererRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
