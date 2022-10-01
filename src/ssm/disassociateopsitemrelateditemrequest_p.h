// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEOPSITEMRELATEDITEMREQUEST_P_H
#define QTAWS_DISASSOCIATEOPSITEMRELATEDITEMREQUEST_P_H

#include "ssmrequest_p.h"
#include "disassociateopsitemrelateditemrequest.h"

namespace QtAws {
namespace Ssm {

class DisassociateOpsItemRelatedItemRequest;

class DisassociateOpsItemRelatedItemRequestPrivate : public SsmRequestPrivate {

public:
    DisassociateOpsItemRelatedItemRequestPrivate(const SsmRequest::Action action,
                                   DisassociateOpsItemRelatedItemRequest * const q);
    DisassociateOpsItemRelatedItemRequestPrivate(const DisassociateOpsItemRelatedItemRequestPrivate &other,
                                   DisassociateOpsItemRelatedItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateOpsItemRelatedItemRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
