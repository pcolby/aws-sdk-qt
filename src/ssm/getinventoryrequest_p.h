// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVENTORYREQUEST_P_H
#define QTAWS_GETINVENTORYREQUEST_P_H

#include "ssmrequest_p.h"
#include "getinventoryrequest.h"

namespace QtAws {
namespace Ssm {

class GetInventoryRequest;

class GetInventoryRequestPrivate : public SsmRequestPrivate {

public:
    GetInventoryRequestPrivate(const SsmRequest::Action action,
                                   GetInventoryRequest * const q);
    GetInventoryRequestPrivate(const GetInventoryRequestPrivate &other,
                                   GetInventoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInventoryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
