// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDELEGATEFROMRESOURCEREQUEST_P_H
#define QTAWS_DISASSOCIATEDELEGATEFROMRESOURCEREQUEST_P_H

#include "workmailrequest_p.h"
#include "disassociatedelegatefromresourcerequest.h"

namespace QtAws {
namespace WorkMail {

class DisassociateDelegateFromResourceRequest;

class DisassociateDelegateFromResourceRequestPrivate : public WorkMailRequestPrivate {

public:
    DisassociateDelegateFromResourceRequestPrivate(const WorkMailRequest::Action action,
                                   DisassociateDelegateFromResourceRequest * const q);
    DisassociateDelegateFromResourceRequestPrivate(const DisassociateDelegateFromResourceRequestPrivate &other,
                                   DisassociateDelegateFromResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateDelegateFromResourceRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
