// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSFORPOLICYREQUEST_P_H
#define QTAWS_LISTTARGETSFORPOLICYREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listtargetsforpolicyrequest.h"

namespace QtAws {
namespace Organizations {

class ListTargetsForPolicyRequest;

class ListTargetsForPolicyRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListTargetsForPolicyRequestPrivate(const OrganizationsRequest::Action action,
                                   ListTargetsForPolicyRequest * const q);
    ListTargetsForPolicyRequestPrivate(const ListTargetsForPolicyRequestPrivate &other,
                                   ListTargetsForPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTargetsForPolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
