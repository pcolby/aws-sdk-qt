// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMKEYSREQUEST_P_H
#define QTAWS_LISTSTREAMKEYSREQUEST_P_H

#include "ivsrequest_p.h"
#include "liststreamkeysrequest.h"

namespace QtAws {
namespace Ivs {

class ListStreamKeysRequest;

class ListStreamKeysRequestPrivate : public IvsRequestPrivate {

public:
    ListStreamKeysRequestPrivate(const IvsRequest::Action action,
                                   ListStreamKeysRequest * const q);
    ListStreamKeysRequestPrivate(const ListStreamKeysRequestPrivate &other,
                                   ListStreamKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStreamKeysRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
