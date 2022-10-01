// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGISTRYREQUEST_P_H
#define QTAWS_UPDATEREGISTRYREQUEST_P_H

#include "schemasrequest_p.h"
#include "updateregistryrequest.h"

namespace QtAws {
namespace Schemas {

class UpdateRegistryRequest;

class UpdateRegistryRequestPrivate : public SchemasRequestPrivate {

public:
    UpdateRegistryRequestPrivate(const SchemasRequest::Action action,
                                   UpdateRegistryRequest * const q);
    UpdateRegistryRequestPrivate(const UpdateRegistryRequestPrivate &other,
                                   UpdateRegistryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRegistryRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
