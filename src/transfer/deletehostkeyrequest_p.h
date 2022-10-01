// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTKEYREQUEST_P_H
#define QTAWS_DELETEHOSTKEYREQUEST_P_H

#include "transferrequest_p.h"
#include "deletehostkeyrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteHostKeyRequest;

class DeleteHostKeyRequestPrivate : public TransferRequestPrivate {

public:
    DeleteHostKeyRequestPrivate(const TransferRequest::Action action,
                                   DeleteHostKeyRequest * const q);
    DeleteHostKeyRequestPrivate(const DeleteHostKeyRequestPrivate &other,
                                   DeleteHostKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHostKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
