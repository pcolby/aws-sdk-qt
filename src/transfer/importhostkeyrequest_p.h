// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTHOSTKEYREQUEST_P_H
#define QTAWS_IMPORTHOSTKEYREQUEST_P_H

#include "transferrequest_p.h"
#include "importhostkeyrequest.h"

namespace QtAws {
namespace Transfer {

class ImportHostKeyRequest;

class ImportHostKeyRequestPrivate : public TransferRequestPrivate {

public:
    ImportHostKeyRequestPrivate(const TransferRequest::Action action,
                                   ImportHostKeyRequest * const q);
    ImportHostKeyRequestPrivate(const ImportHostKeyRequestPrivate &other,
                                   ImportHostKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportHostKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
