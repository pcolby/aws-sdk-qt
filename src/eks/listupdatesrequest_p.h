// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUPDATESREQUEST_P_H
#define QTAWS_LISTUPDATESREQUEST_P_H

#include "eksrequest_p.h"
#include "listupdatesrequest.h"

namespace QtAws {
namespace Eks {

class ListUpdatesRequest;

class ListUpdatesRequestPrivate : public EksRequestPrivate {

public:
    ListUpdatesRequestPrivate(const EksRequest::Action action,
                                   ListUpdatesRequest * const q);
    ListUpdatesRequestPrivate(const ListUpdatesRequestPrivate &other,
                                   ListUpdatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUpdatesRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
