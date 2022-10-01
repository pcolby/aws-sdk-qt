// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATEENCRYPTIONKEYREQUEST_P_H
#define QTAWS_ROTATEENCRYPTIONKEYREQUEST_P_H

#include "redshiftrequest_p.h"
#include "rotateencryptionkeyrequest.h"

namespace QtAws {
namespace Redshift {

class RotateEncryptionKeyRequest;

class RotateEncryptionKeyRequestPrivate : public RedshiftRequestPrivate {

public:
    RotateEncryptionKeyRequestPrivate(const RedshiftRequest::Action action,
                                   RotateEncryptionKeyRequest * const q);
    RotateEncryptionKeyRequestPrivate(const RotateEncryptionKeyRequestPrivate &other,
                                   RotateEncryptionKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(RotateEncryptionKeyRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
