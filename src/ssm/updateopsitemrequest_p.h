// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPSITEMREQUEST_P_H
#define QTAWS_UPDATEOPSITEMREQUEST_P_H

#include "ssmrequest_p.h"
#include "updateopsitemrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateOpsItemRequest;

class UpdateOpsItemRequestPrivate : public SsmRequestPrivate {

public:
    UpdateOpsItemRequestPrivate(const SsmRequest::Action action,
                                   UpdateOpsItemRequest * const q);
    UpdateOpsItemRequestPrivate(const UpdateOpsItemRequestPrivate &other,
                                   UpdateOpsItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateOpsItemRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
