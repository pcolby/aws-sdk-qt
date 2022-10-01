// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHMENTSREQUEST_P_H
#define QTAWS_LISTATTACHMENTSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "listattachmentsrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListAttachmentsRequest;

class ListAttachmentsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    ListAttachmentsRequestPrivate(const NetworkManagerRequest::Action action,
                                   ListAttachmentsRequest * const q);
    ListAttachmentsRequestPrivate(const ListAttachmentsRequestPrivate &other,
                                   ListAttachmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttachmentsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
