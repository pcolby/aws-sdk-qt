// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGPLATFORMSRESPONSE_P_H
#define QTAWS_LISTSIGNINGPLATFORMSRESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class ListSigningPlatformsResponse;

class ListSigningPlatformsResponsePrivate : public SignerResponsePrivate {

public:

    explicit ListSigningPlatformsResponsePrivate(ListSigningPlatformsResponse * const q);

    void parseListSigningPlatformsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSigningPlatformsResponse)
    Q_DISABLE_COPY(ListSigningPlatformsResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
