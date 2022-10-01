// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKEYREQUEST_P_H
#define QTAWS_DISABLEKEYREQUEST_P_H

#include "kmsrequest_p.h"
#include "disablekeyrequest.h"

namespace QtAws {
namespace Kms {

class DisableKeyRequest;

class DisableKeyRequestPrivate : public KmsRequestPrivate {

public:
    DisableKeyRequestPrivate(const KmsRequest::Action action,
                                   DisableKeyRequest * const q);
    DisableKeyRequestPrivate(const DisableKeyRequestPrivate &other,
                                   DisableKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
