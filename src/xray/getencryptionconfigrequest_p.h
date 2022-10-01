// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENCRYPTIONCONFIGREQUEST_P_H
#define QTAWS_GETENCRYPTIONCONFIGREQUEST_P_H

#include "xrayrequest_p.h"
#include "getencryptionconfigrequest.h"

namespace QtAws {
namespace XRay {

class GetEncryptionConfigRequest;

class GetEncryptionConfigRequestPrivate : public XRayRequestPrivate {

public:
    GetEncryptionConfigRequestPrivate(const XRayRequest::Action action,
                                   GetEncryptionConfigRequest * const q);
    GetEncryptionConfigRequestPrivate(const GetEncryptionConfigRequestPrivate &other,
                                   GetEncryptionConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEncryptionConfigRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
