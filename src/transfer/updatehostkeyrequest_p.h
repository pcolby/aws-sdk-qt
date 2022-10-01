// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTKEYREQUEST_P_H
#define QTAWS_UPDATEHOSTKEYREQUEST_P_H

#include "transferrequest_p.h"
#include "updatehostkeyrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateHostKeyRequest;

class UpdateHostKeyRequestPrivate : public TransferRequestPrivate {

public:
    UpdateHostKeyRequestPrivate(const TransferRequest::Action action,
                                   UpdateHostKeyRequest * const q);
    UpdateHostKeyRequestPrivate(const UpdateHostKeyRequestPrivate &other,
                                   UpdateHostKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateHostKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
