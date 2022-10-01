// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSITEMREQUEST_P_H
#define QTAWS_GETOPSITEMREQUEST_P_H

#include "ssmrequest_p.h"
#include "getopsitemrequest.h"

namespace QtAws {
namespace Ssm {

class GetOpsItemRequest;

class GetOpsItemRequestPrivate : public SsmRequestPrivate {

public:
    GetOpsItemRequestPrivate(const SsmRequest::Action action,
                                   GetOpsItemRequest * const q);
    GetOpsItemRequestPrivate(const GetOpsItemRequestPrivate &other,
                                   GetOpsItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOpsItemRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
