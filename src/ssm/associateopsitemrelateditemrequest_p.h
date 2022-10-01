// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEOPSITEMRELATEDITEMREQUEST_P_H
#define QTAWS_ASSOCIATEOPSITEMRELATEDITEMREQUEST_P_H

#include "ssmrequest_p.h"
#include "associateopsitemrelateditemrequest.h"

namespace QtAws {
namespace Ssm {

class AssociateOpsItemRelatedItemRequest;

class AssociateOpsItemRelatedItemRequestPrivate : public SsmRequestPrivate {

public:
    AssociateOpsItemRelatedItemRequestPrivate(const SsmRequest::Action action,
                                   AssociateOpsItemRelatedItemRequest * const q);
    AssociateOpsItemRelatedItemRequestPrivate(const AssociateOpsItemRelatedItemRequestPrivate &other,
                                   AssociateOpsItemRelatedItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateOpsItemRelatedItemRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
