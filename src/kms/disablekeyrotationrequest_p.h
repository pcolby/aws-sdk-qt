// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKEYROTATIONREQUEST_P_H
#define QTAWS_DISABLEKEYROTATIONREQUEST_P_H

#include "kmsrequest_p.h"
#include "disablekeyrotationrequest.h"

namespace QtAws {
namespace Kms {

class DisableKeyRotationRequest;

class DisableKeyRotationRequestPrivate : public KmsRequestPrivate {

public:
    DisableKeyRotationRequestPrivate(const KmsRequest::Action action,
                                   DisableKeyRotationRequest * const q);
    DisableKeyRotationRequestPrivate(const DisableKeyRotationRequestPrivate &other,
                                   DisableKeyRotationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableKeyRotationRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
