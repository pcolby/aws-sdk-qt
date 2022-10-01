// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINVENTORYREQUEST_P_H
#define QTAWS_DELETEINVENTORYREQUEST_P_H

#include "ssmrequest_p.h"
#include "deleteinventoryrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteInventoryRequest;

class DeleteInventoryRequestPrivate : public SsmRequestPrivate {

public:
    DeleteInventoryRequestPrivate(const SsmRequest::Action action,
                                   DeleteInventoryRequest * const q);
    DeleteInventoryRequestPrivate(const DeleteInventoryRequestPrivate &other,
                                   DeleteInventoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInventoryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
