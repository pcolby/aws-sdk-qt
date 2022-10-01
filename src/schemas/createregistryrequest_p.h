// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGISTRYREQUEST_P_H
#define QTAWS_CREATEREGISTRYREQUEST_P_H

#include "schemasrequest_p.h"
#include "createregistryrequest.h"

namespace QtAws {
namespace Schemas {

class CreateRegistryRequest;

class CreateRegistryRequestPrivate : public SchemasRequestPrivate {

public:
    CreateRegistryRequestPrivate(const SchemasRequest::Action action,
                                   CreateRegistryRequest * const q);
    CreateRegistryRequestPrivate(const CreateRegistryRequestPrivate &other,
                                   CreateRegistryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRegistryRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
