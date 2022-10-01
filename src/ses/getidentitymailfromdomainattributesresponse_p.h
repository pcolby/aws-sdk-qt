// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYMAILFROMDOMAINATTRIBUTESRESPONSE_P_H
#define QTAWS_GETIDENTITYMAILFROMDOMAINATTRIBUTESRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class GetIdentityMailFromDomainAttributesResponse;

class GetIdentityMailFromDomainAttributesResponsePrivate : public SesResponsePrivate {

public:

    explicit GetIdentityMailFromDomainAttributesResponsePrivate(GetIdentityMailFromDomainAttributesResponse * const q);

    void parseGetIdentityMailFromDomainAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdentityMailFromDomainAttributesResponse)
    Q_DISABLE_COPY(GetIdentityMailFromDomainAttributesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
