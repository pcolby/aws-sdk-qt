// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVEREDSCHEMAREQUEST_P_H
#define QTAWS_GETDISCOVEREDSCHEMAREQUEST_P_H

#include "schemasrequest_p.h"
#include "getdiscoveredschemarequest.h"

namespace QtAws {
namespace Schemas {

class GetDiscoveredSchemaRequest;

class GetDiscoveredSchemaRequestPrivate : public SchemasRequestPrivate {

public:
    GetDiscoveredSchemaRequestPrivate(const SchemasRequest::Action action,
                                   GetDiscoveredSchemaRequest * const q);
    GetDiscoveredSchemaRequestPrivate(const GetDiscoveredSchemaRequestPrivate &other,
                                   GetDiscoveredSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDiscoveredSchemaRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
