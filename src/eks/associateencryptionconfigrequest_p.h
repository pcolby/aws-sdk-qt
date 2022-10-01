// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENCRYPTIONCONFIGREQUEST_P_H
#define QTAWS_ASSOCIATEENCRYPTIONCONFIGREQUEST_P_H

#include "eksrequest_p.h"
#include "associateencryptionconfigrequest.h"

namespace QtAws {
namespace Eks {

class AssociateEncryptionConfigRequest;

class AssociateEncryptionConfigRequestPrivate : public EksRequestPrivate {

public:
    AssociateEncryptionConfigRequestPrivate(const EksRequest::Action action,
                                   AssociateEncryptionConfigRequest * const q);
    AssociateEncryptionConfigRequestPrivate(const AssociateEncryptionConfigRequestPrivate &other,
                                   AssociateEncryptionConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateEncryptionConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
