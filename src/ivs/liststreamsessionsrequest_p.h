// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMSESSIONSREQUEST_P_H
#define QTAWS_LISTSTREAMSESSIONSREQUEST_P_H

#include "ivsrequest_p.h"
#include "liststreamsessionsrequest.h"

namespace QtAws {
namespace Ivs {

class ListStreamSessionsRequest;

class ListStreamSessionsRequestPrivate : public IvsRequestPrivate {

public:
    ListStreamSessionsRequestPrivate(const IvsRequest::Action action,
                                   ListStreamSessionsRequest * const q);
    ListStreamSessionsRequestPrivate(const ListStreamSessionsRequestPrivate &other,
                                   ListStreamSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStreamSessionsRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
