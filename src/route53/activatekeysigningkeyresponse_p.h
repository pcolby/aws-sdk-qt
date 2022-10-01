// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEKEYSIGNINGKEYRESPONSE_P_H
#define QTAWS_ACTIVATEKEYSIGNINGKEYRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ActivateKeySigningKeyResponse;

class ActivateKeySigningKeyResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ActivateKeySigningKeyResponsePrivate(ActivateKeySigningKeyResponse * const q);

    void parseActivateKeySigningKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ActivateKeySigningKeyResponse)
    Q_DISABLE_COPY(ActivateKeySigningKeyResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
