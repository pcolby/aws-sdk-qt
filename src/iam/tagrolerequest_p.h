// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGROLEREQUEST_P_H
#define QTAWS_TAGROLEREQUEST_P_H

#include "iamrequest_p.h"
#include "tagrolerequest.h"

namespace QtAws {
namespace Iam {

class TagRoleRequest;

class TagRoleRequestPrivate : public IamRequestPrivate {

public:
    TagRoleRequestPrivate(const IamRequest::Action action,
                                   TagRoleRequest * const q);
    TagRoleRequestPrivate(const TagRoleRequestPrivate &other,
                                   TagRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
