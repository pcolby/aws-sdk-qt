// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGPLATFORMRESPONSE_P_H
#define QTAWS_GETSIGNINGPLATFORMRESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class GetSigningPlatformResponse;

class GetSigningPlatformResponsePrivate : public SignerResponsePrivate {

public:

    explicit GetSigningPlatformResponsePrivate(GetSigningPlatformResponse * const q);

    void parseGetSigningPlatformResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSigningPlatformResponse)
    Q_DISABLE_COPY(GetSigningPlatformResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
