// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICKEYRESPONSE_P_H
#define QTAWS_GETPUBLICKEYRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class GetPublicKeyResponse;

class GetPublicKeyResponsePrivate : public KmsResponsePrivate {

public:

    explicit GetPublicKeyResponsePrivate(GetPublicKeyResponse * const q);

    void parseGetPublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPublicKeyResponse)
    Q_DISABLE_COPY(GetPublicKeyResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
