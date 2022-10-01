// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFILETRANSFERREQUEST_P_H
#define QTAWS_STARTFILETRANSFERREQUEST_P_H

#include "transferrequest_p.h"
#include "startfiletransferrequest.h"

namespace QtAws {
namespace Transfer {

class StartFileTransferRequest;

class StartFileTransferRequestPrivate : public TransferRequestPrivate {

public:
    StartFileTransferRequestPrivate(const TransferRequest::Action action,
                                   StartFileTransferRequest * const q);
    StartFileTransferRequestPrivate(const StartFileTransferRequestPrivate &other,
                                   StartFileTransferRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFileTransferRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
