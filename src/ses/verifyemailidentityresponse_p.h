// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYEMAILIDENTITYRESPONSE_P_H
#define QTAWS_VERIFYEMAILIDENTITYRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class VerifyEmailIdentityResponse;

class VerifyEmailIdentityResponsePrivate : public SesResponsePrivate {

public:

    explicit VerifyEmailIdentityResponsePrivate(VerifyEmailIdentityResponse * const q);

    void parseVerifyEmailIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifyEmailIdentityResponse)
    Q_DISABLE_COPY(VerifyEmailIdentityResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
