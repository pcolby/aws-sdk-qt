// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYSREQUEST_P_H
#define QTAWS_LISTKEYSREQUEST_P_H

#include "kmsrequest_p.h"
#include "listkeysrequest.h"

namespace QtAws {
namespace Kms {

class ListKeysRequest;

class ListKeysRequestPrivate : public KmsRequestPrivate {

public:
    ListKeysRequestPrivate(const KmsRequest::Action action,
                                   ListKeysRequest * const q);
    ListKeysRequestPrivate(const ListKeysRequestPrivate &other,
                                   ListKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListKeysRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
