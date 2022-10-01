// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSSHPUBLICKEYRESPONSE_P_H
#define QTAWS_UPLOADSSHPUBLICKEYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UploadSSHPublicKeyResponse;

class UploadSSHPublicKeyResponsePrivate : public IamResponsePrivate {

public:

    explicit UploadSSHPublicKeyResponsePrivate(UploadSSHPublicKeyResponse * const q);

    void parseUploadSSHPublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadSSHPublicKeyResponse)
    Q_DISABLE_COPY(UploadSSHPublicKeyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
