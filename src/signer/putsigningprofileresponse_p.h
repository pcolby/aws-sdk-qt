// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSIGNINGPROFILERESPONSE_P_H
#define QTAWS_PUTSIGNINGPROFILERESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class PutSigningProfileResponse;

class PutSigningProfileResponsePrivate : public SignerResponsePrivate {

public:

    explicit PutSigningProfileResponsePrivate(PutSigningProfileResponse * const q);

    void parsePutSigningProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSigningProfileResponse)
    Q_DISABLE_COPY(PutSigningProfileResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
