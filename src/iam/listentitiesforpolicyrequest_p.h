// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESFORPOLICYREQUEST_P_H
#define QTAWS_LISTENTITIESFORPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "listentitiesforpolicyrequest.h"

namespace QtAws {
namespace Iam {

class ListEntitiesForPolicyRequest;

class ListEntitiesForPolicyRequestPrivate : public IamRequestPrivate {

public:
    ListEntitiesForPolicyRequestPrivate(const IamRequest::Action action,
                                   ListEntitiesForPolicyRequest * const q);
    ListEntitiesForPolicyRequestPrivate(const ListEntitiesForPolicyRequestPrivate &other,
                                   ListEntitiesForPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEntitiesForPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
