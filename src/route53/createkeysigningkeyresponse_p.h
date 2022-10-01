// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSIGNINGKEYRESPONSE_P_H
#define QTAWS_CREATEKEYSIGNINGKEYRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class CreateKeySigningKeyResponse;

class CreateKeySigningKeyResponsePrivate : public Route53ResponsePrivate {

public:

    explicit CreateKeySigningKeyResponsePrivate(CreateKeySigningKeyResponse * const q);

    void parseCreateKeySigningKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateKeySigningKeyResponse)
    Q_DISABLE_COPY(CreateKeySigningKeyResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
