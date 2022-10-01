// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSSHPUBLICKEYREQUEST_P_H
#define QTAWS_IMPORTSSHPUBLICKEYREQUEST_P_H

#include "transferrequest_p.h"
#include "importsshpublickeyrequest.h"

namespace QtAws {
namespace Transfer {

class ImportSshPublicKeyRequest;

class ImportSshPublicKeyRequestPrivate : public TransferRequestPrivate {

public:
    ImportSshPublicKeyRequestPrivate(const TransferRequest::Action action,
                                   ImportSshPublicKeyRequest * const q);
    ImportSshPublicKeyRequestPrivate(const ImportSshPublicKeyRequestPrivate &other,
                                   ImportSshPublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportSshPublicKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
