// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPSITEMREQUEST_P_H
#define QTAWS_CREATEOPSITEMREQUEST_P_H

#include "ssmrequest_p.h"
#include "createopsitemrequest.h"

namespace QtAws {
namespace Ssm {

class CreateOpsItemRequest;

class CreateOpsItemRequestPrivate : public SsmRequestPrivate {

public:
    CreateOpsItemRequestPrivate(const SsmRequest::Action action,
                                   CreateOpsItemRequest * const q);
    CreateOpsItemRequestPrivate(const CreateOpsItemRequestPrivate &other,
                                   CreateOpsItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOpsItemRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
