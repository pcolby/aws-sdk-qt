// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYROTATIONSTATUSREQUEST_P_H
#define QTAWS_GETKEYROTATIONSTATUSREQUEST_P_H

#include "kmsrequest_p.h"
#include "getkeyrotationstatusrequest.h"

namespace QtAws {
namespace Kms {

class GetKeyRotationStatusRequest;

class GetKeyRotationStatusRequestPrivate : public KmsRequestPrivate {

public:
    GetKeyRotationStatusRequestPrivate(const KmsRequest::Action action,
                                   GetKeyRotationStatusRequest * const q);
    GetKeyRotationStatusRequestPrivate(const GetKeyRotationStatusRequestPrivate &other,
                                   GetKeyRotationStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetKeyRotationStatusRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
