// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGPROFILERESPONSE_P_H
#define QTAWS_GETSIGNINGPROFILERESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class GetSigningProfileResponse;

class GetSigningProfileResponsePrivate : public SignerResponsePrivate {

public:

    explicit GetSigningProfileResponsePrivate(GetSigningProfileResponse * const q);

    void parseGetSigningProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSigningProfileResponse)
    Q_DISABLE_COPY(GetSigningProfileResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
