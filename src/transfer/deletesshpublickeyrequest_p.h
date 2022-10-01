// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESSHPUBLICKEYREQUEST_P_H
#define QTAWS_DELETESSHPUBLICKEYREQUEST_P_H

#include "transferrequest_p.h"
#include "deletesshpublickeyrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteSshPublicKeyRequest;

class DeleteSshPublicKeyRequestPrivate : public TransferRequestPrivate {

public:
    DeleteSshPublicKeyRequestPrivate(const TransferRequest::Action action,
                                   DeleteSshPublicKeyRequest * const q);
    DeleteSshPublicKeyRequestPrivate(const DeleteSshPublicKeyRequestPrivate &other,
                                   DeleteSshPublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSshPublicKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
