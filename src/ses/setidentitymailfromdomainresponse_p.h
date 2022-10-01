// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYMAILFROMDOMAINRESPONSE_P_H
#define QTAWS_SETIDENTITYMAILFROMDOMAINRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SetIdentityMailFromDomainResponse;

class SetIdentityMailFromDomainResponsePrivate : public SesResponsePrivate {

public:

    explicit SetIdentityMailFromDomainResponsePrivate(SetIdentityMailFromDomainResponse * const q);

    void parseSetIdentityMailFromDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetIdentityMailFromDomainResponse)
    Q_DISABLE_COPY(SetIdentityMailFromDomainResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
