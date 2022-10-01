// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGPOLICYREQUEST_P_H
#define QTAWS_TAGPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "tagpolicyrequest.h"

namespace QtAws {
namespace Iam {

class TagPolicyRequest;

class TagPolicyRequestPrivate : public IamRequestPrivate {

public:
    TagPolicyRequestPrivate(const IamRequest::Action action,
                                   TagPolicyRequest * const q);
    TagPolicyRequestPrivate(const TagPolicyRequestPrivate &other,
                                   TagPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
