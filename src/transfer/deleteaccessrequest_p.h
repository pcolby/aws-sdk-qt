// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSREQUEST_P_H
#define QTAWS_DELETEACCESSREQUEST_P_H

#include "transferrequest_p.h"
#include "deleteaccessrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteAccessRequest;

class DeleteAccessRequestPrivate : public TransferRequestPrivate {

public:
    DeleteAccessRequestPrivate(const TransferRequest::Action action,
                                   DeleteAccessRequest * const q);
    DeleteAccessRequestPrivate(const DeleteAccessRequestPrivate &other,
                                   DeleteAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccessRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
