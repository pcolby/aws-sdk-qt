// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDELEGATETORESOURCEREQUEST_P_H
#define QTAWS_ASSOCIATEDELEGATETORESOURCEREQUEST_P_H

#include "workmailrequest_p.h"
#include "associatedelegatetoresourcerequest.h"

namespace QtAws {
namespace WorkMail {

class AssociateDelegateToResourceRequest;

class AssociateDelegateToResourceRequestPrivate : public WorkMailRequestPrivate {

public:
    AssociateDelegateToResourceRequestPrivate(const WorkMailRequest::Action action,
                                   AssociateDelegateToResourceRequest * const q);
    AssociateDelegateToResourceRequestPrivate(const AssociateDelegateToResourceRequestPrivate &other,
                                   AssociateDelegateToResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDelegateToResourceRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
