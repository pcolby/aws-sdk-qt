// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILESYSTEMASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTFILESYSTEMASSOCIATIONSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "listfilesystemassociationsrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListFileSystemAssociationsRequest;

class ListFileSystemAssociationsRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ListFileSystemAssociationsRequestPrivate(const StorageGatewayRequest::Action action,
                                   ListFileSystemAssociationsRequest * const q);
    ListFileSystemAssociationsRequestPrivate(const ListFileSystemAssociationsRequestPrivate &other,
                                   ListFileSystemAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFileSystemAssociationsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
