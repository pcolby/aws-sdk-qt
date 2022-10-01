// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYDOMAINIDENTITYRESPONSE_P_H
#define QTAWS_VERIFYDOMAINIDENTITYRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class VerifyDomainIdentityResponse;

class VerifyDomainIdentityResponsePrivate : public SesResponsePrivate {

public:

    explicit VerifyDomainIdentityResponsePrivate(VerifyDomainIdentityResponse * const q);

    void parseVerifyDomainIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifyDomainIdentityResponse)
    Q_DISABLE_COPY(VerifyDomainIdentityResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
