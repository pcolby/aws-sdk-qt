// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGROUPPOLICYREQUEST_P_H
#define QTAWS_PUTGROUPPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "putgrouppolicyrequest.h"

namespace QtAws {
namespace Iam {

class PutGroupPolicyRequest;

class PutGroupPolicyRequestPrivate : public IamRequestPrivate {

public:
    PutGroupPolicyRequestPrivate(const IamRequest::Action action,
                                   PutGroupPolicyRequest * const q);
    PutGroupPolicyRequestPrivate(const PutGroupPolicyRequestPrivate &other,
                                   PutGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutGroupPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
