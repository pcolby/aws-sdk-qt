// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESIGNATURERESPONSE_P_H
#define QTAWS_REVOKESIGNATURERESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class RevokeSignatureResponse;

class RevokeSignatureResponsePrivate : public SignerResponsePrivate {

public:

    explicit RevokeSignatureResponsePrivate(RevokeSignatureResponse * const q);

    void parseRevokeSignatureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeSignatureResponse)
    Q_DISABLE_COPY(RevokeSignatureResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
