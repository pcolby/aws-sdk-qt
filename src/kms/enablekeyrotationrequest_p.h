// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKEYROTATIONREQUEST_P_H
#define QTAWS_ENABLEKEYROTATIONREQUEST_P_H

#include "kmsrequest_p.h"
#include "enablekeyrotationrequest.h"

namespace QtAws {
namespace Kms {

class EnableKeyRotationRequest;

class EnableKeyRotationRequestPrivate : public KmsRequestPrivate {

public:
    EnableKeyRotationRequestPrivate(const KmsRequest::Action action,
                                   EnableKeyRotationRequest * const q);
    EnableKeyRotationRequestPrivate(const EnableKeyRotationRequestPrivate &other,
                                   EnableKeyRotationRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableKeyRotationRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
