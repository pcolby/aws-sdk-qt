// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDWORKINGSTORAGEREQUEST_P_H
#define QTAWS_ADDWORKINGSTORAGEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "addworkingstoragerequest.h"

namespace QtAws {
namespace StorageGateway {

class AddWorkingStorageRequest;

class AddWorkingStorageRequestPrivate : public StorageGatewayRequestPrivate {

public:
    AddWorkingStorageRequestPrivate(const StorageGatewayRequest::Action action,
                                   AddWorkingStorageRequest * const q);
    AddWorkingStorageRequestPrivate(const AddWorkingStorageRequestPrivate &other,
                                   AddWorkingStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddWorkingStorageRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
