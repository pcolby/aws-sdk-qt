// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTADDONSREQUEST_P_H
#define QTAWS_LISTADDONSREQUEST_P_H

#include "eksrequest_p.h"
#include "listaddonsrequest.h"

namespace QtAws {
namespace Eks {

class ListAddonsRequest;

class ListAddonsRequestPrivate : public EksRequestPrivate {

public:
    ListAddonsRequestPrivate(const EksRequest::Action action,
                                   ListAddonsRequest * const q);
    ListAddonsRequestPrivate(const ListAddonsRequestPrivate &other,
                                   ListAddonsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAddonsRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
