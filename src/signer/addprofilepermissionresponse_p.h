// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPROFILEPERMISSIONRESPONSE_P_H
#define QTAWS_ADDPROFILEPERMISSIONRESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class AddProfilePermissionResponse;

class AddProfilePermissionResponsePrivate : public SignerResponsePrivate {

public:

    explicit AddProfilePermissionResponsePrivate(AddProfilePermissionResponse * const q);

    void parseAddProfilePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddProfilePermissionResponse)
    Q_DISABLE_COPY(AddProfilePermissionResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
