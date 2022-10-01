// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTEGRATIONASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTINTEGRATIONASSOCIATIONSREQUEST_P_H

#include "connectrequest_p.h"
#include "listintegrationassociationsrequest.h"

namespace QtAws {
namespace Connect {

class ListIntegrationAssociationsRequest;

class ListIntegrationAssociationsRequestPrivate : public ConnectRequestPrivate {

public:
    ListIntegrationAssociationsRequestPrivate(const ConnectRequest::Action action,
                                   ListIntegrationAssociationsRequest * const q);
    ListIntegrationAssociationsRequestPrivate(const ListIntegrationAssociationsRequestPrivate &other,
                                   ListIntegrationAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIntegrationAssociationsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
