// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSSHPUBLICKEYSREQUEST_P_H
#define QTAWS_LISTSSHPUBLICKEYSREQUEST_P_H

#include "iamrequest_p.h"
#include "listsshpublickeysrequest.h"

namespace QtAws {
namespace Iam {

class ListSSHPublicKeysRequest;

class ListSSHPublicKeysRequestPrivate : public IamRequestPrivate {

public:
    ListSSHPublicKeysRequestPrivate(const IamRequest::Action action,
                                   ListSSHPublicKeysRequest * const q);
    ListSSHPublicKeysRequestPrivate(const ListSSHPublicKeysRequestPrivate &other,
                                   ListSSHPublicKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSSHPublicKeysRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
