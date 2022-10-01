// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTENCRYPTIONCONFIGREQUEST_P_H
#define QTAWS_PUTENCRYPTIONCONFIGREQUEST_P_H

#include "xrayrequest_p.h"
#include "putencryptionconfigrequest.h"

namespace QtAws {
namespace XRay {

class PutEncryptionConfigRequest;

class PutEncryptionConfigRequestPrivate : public XRayRequestPrivate {

public:
    PutEncryptionConfigRequestPrivate(const XRayRequest::Action action,
                                   PutEncryptionConfigRequest * const q);
    PutEncryptionConfigRequestPrivate(const PutEncryptionConfigRequestPrivate &other,
                                   PutEncryptionConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEncryptionConfigRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
