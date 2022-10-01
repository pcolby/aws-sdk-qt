// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYVERIFICATIONATTRIBUTESRESPONSE_P_H
#define QTAWS_GETIDENTITYVERIFICATIONATTRIBUTESRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class GetIdentityVerificationAttributesResponse;

class GetIdentityVerificationAttributesResponsePrivate : public SesResponsePrivate {

public:

    explicit GetIdentityVerificationAttributesResponsePrivate(GetIdentityVerificationAttributesResponse * const q);

    void parseGetIdentityVerificationAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdentityVerificationAttributesResponse)
    Q_DISABLE_COPY(GetIdentityVerificationAttributesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
