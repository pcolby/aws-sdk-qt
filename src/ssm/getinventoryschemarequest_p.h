// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVENTORYSCHEMAREQUEST_P_H
#define QTAWS_GETINVENTORYSCHEMAREQUEST_P_H

#include "ssmrequest_p.h"
#include "getinventoryschemarequest.h"

namespace QtAws {
namespace Ssm {

class GetInventorySchemaRequest;

class GetInventorySchemaRequestPrivate : public SsmRequestPrivate {

public:
    GetInventorySchemaRequestPrivate(const SsmRequest::Action action,
                                   GetInventorySchemaRequest * const q);
    GetInventorySchemaRequestPrivate(const GetInventorySchemaRequestPrivate &other,
                                   GetInventorySchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInventorySchemaRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
