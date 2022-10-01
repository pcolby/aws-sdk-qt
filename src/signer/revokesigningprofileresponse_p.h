// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESIGNINGPROFILERESPONSE_P_H
#define QTAWS_REVOKESIGNINGPROFILERESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class RevokeSigningProfileResponse;

class RevokeSigningProfileResponsePrivate : public SignerResponsePrivate {

public:

    explicit RevokeSigningProfileResponsePrivate(RevokeSigningProfileResponse * const q);

    void parseRevokeSigningProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeSigningProfileResponse)
    Q_DISABLE_COPY(RevokeSigningProfileResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
