// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNTAPEPOOLREQUEST_P_H
#define QTAWS_ASSIGNTAPEPOOLREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "assigntapepoolrequest.h"

namespace QtAws {
namespace StorageGateway {

class AssignTapePoolRequest;

class AssignTapePoolRequestPrivate : public StorageGatewayRequestPrivate {

public:
    AssignTapePoolRequestPrivate(const StorageGatewayRequest::Action action,
                                   AssignTapePoolRequest * const q);
    AssignTapePoolRequestPrivate(const AssignTapePoolRequestPrivate &other,
                                   AssignTapePoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssignTapePoolRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
