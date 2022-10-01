// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESSHPUBLICKEYRESPONSE_P_H
#define QTAWS_DELETESSHPUBLICKEYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteSSHPublicKeyResponse;

class DeleteSSHPublicKeyResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteSSHPublicKeyResponsePrivate(DeleteSSHPublicKeyResponse * const q);

    void parseDeleteSSHPublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSSHPublicKeyResponse)
    Q_DISABLE_COPY(DeleteSSHPublicKeyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
