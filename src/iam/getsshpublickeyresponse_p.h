// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSSHPUBLICKEYRESPONSE_P_H
#define QTAWS_GETSSHPUBLICKEYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetSSHPublicKeyResponse;

class GetSSHPublicKeyResponsePrivate : public IamResponsePrivate {

public:

    explicit GetSSHPublicKeyResponsePrivate(GetSSHPublicKeyResponse * const q);

    void parseGetSSHPublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSSHPublicKeyResponse)
    Q_DISABLE_COPY(GetSSHPublicKeyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
