// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILESREQUEST_P_H
#define QTAWS_LISTPROFILESREQUEST_P_H

#include "transferrequest_p.h"
#include "listprofilesrequest.h"

namespace QtAws {
namespace Transfer {

class ListProfilesRequest;

class ListProfilesRequestPrivate : public TransferRequestPrivate {

public:
    ListProfilesRequestPrivate(const TransferRequest::Action action,
                                   ListProfilesRequest * const q);
    ListProfilesRequestPrivate(const ListProfilesRequestPrivate &other,
                                   ListProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProfilesRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
