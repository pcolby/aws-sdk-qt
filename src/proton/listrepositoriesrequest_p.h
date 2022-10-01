// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESREQUEST_P_H
#define QTAWS_LISTREPOSITORIESREQUEST_P_H

#include "protonrequest_p.h"
#include "listrepositoriesrequest.h"

namespace QtAws {
namespace Proton {

class ListRepositoriesRequest;

class ListRepositoriesRequestPrivate : public ProtonRequestPrivate {

public:
    ListRepositoriesRequestPrivate(const ProtonRequest::Action action,
                                   ListRepositoriesRequest * const q);
    ListRepositoriesRequestPrivate(const ListRepositoriesRequestPrivate &other,
                                   ListRepositoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRepositoriesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
