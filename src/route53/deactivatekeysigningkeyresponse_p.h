// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEKEYSIGNINGKEYRESPONSE_P_H
#define QTAWS_DEACTIVATEKEYSIGNINGKEYRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DeactivateKeySigningKeyResponse;

class DeactivateKeySigningKeyResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DeactivateKeySigningKeyResponsePrivate(DeactivateKeySigningKeyResponse * const q);

    void parseDeactivateKeySigningKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeactivateKeySigningKeyResponse)
    Q_DISABLE_COPY(DeactivateKeySigningKeyResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
