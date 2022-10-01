// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESSHPUBLICKEYRESPONSE_P_H
#define QTAWS_UPDATESSHPUBLICKEYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateSSHPublicKeyResponse;

class UpdateSSHPublicKeyResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateSSHPublicKeyResponsePrivate(UpdateSSHPublicKeyResponse * const q);

    void parseUpdateSSHPublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSSHPublicKeyResponse)
    Q_DISABLE_COPY(UpdateSSHPublicKeyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
