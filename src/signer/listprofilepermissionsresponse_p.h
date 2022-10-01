// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEPERMISSIONSRESPONSE_P_H
#define QTAWS_LISTPROFILEPERMISSIONSRESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class ListProfilePermissionsResponse;

class ListProfilePermissionsResponsePrivate : public SignerResponsePrivate {

public:

    explicit ListProfilePermissionsResponsePrivate(ListProfilePermissionsResponse * const q);

    void parseListProfilePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProfilePermissionsResponse)
    Q_DISABLE_COPY(ListProfilePermissionsResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
