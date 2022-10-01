// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIGNINGPROFILERESPONSE_P_H
#define QTAWS_CANCELSIGNINGPROFILERESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class CancelSigningProfileResponse;

class CancelSigningProfileResponsePrivate : public SignerResponsePrivate {

public:

    explicit CancelSigningProfileResponsePrivate(CancelSigningProfileResponse * const q);

    void parseCancelSigningProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelSigningProfileResponse)
    Q_DISABLE_COPY(CancelSigningProfileResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
