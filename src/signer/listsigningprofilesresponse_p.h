// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGPROFILESRESPONSE_P_H
#define QTAWS_LISTSIGNINGPROFILESRESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class ListSigningProfilesResponse;

class ListSigningProfilesResponsePrivate : public SignerResponsePrivate {

public:

    explicit ListSigningProfilesResponsePrivate(ListSigningProfilesResponse * const q);

    void parseListSigningProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSigningProfilesResponse)
    Q_DISABLE_COPY(ListSigningProfilesResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
