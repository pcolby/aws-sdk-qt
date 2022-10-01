// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTERESOURCESHARECREATEDFROMPOLICYREQUEST_P_H
#define QTAWS_PROMOTERESOURCESHARECREATEDFROMPOLICYREQUEST_P_H

#include "ramrequest_p.h"
#include "promoteresourcesharecreatedfrompolicyrequest.h"

namespace QtAws {
namespace Ram {

class PromoteResourceShareCreatedFromPolicyRequest;

class PromoteResourceShareCreatedFromPolicyRequestPrivate : public RamRequestPrivate {

public:
    PromoteResourceShareCreatedFromPolicyRequestPrivate(const RamRequest::Action action,
                                   PromoteResourceShareCreatedFromPolicyRequest * const q);
    PromoteResourceShareCreatedFromPolicyRequestPrivate(const PromoteResourceShareCreatedFromPolicyRequestPrivate &other,
                                   PromoteResourceShareCreatedFromPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PromoteResourceShareCreatedFromPolicyRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
