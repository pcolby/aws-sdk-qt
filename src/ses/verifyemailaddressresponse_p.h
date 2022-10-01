// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYEMAILADDRESSRESPONSE_P_H
#define QTAWS_VERIFYEMAILADDRESSRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class VerifyEmailAddressResponse;

class VerifyEmailAddressResponsePrivate : public SesResponsePrivate {

public:

    explicit VerifyEmailAddressResponsePrivate(VerifyEmailAddressResponse * const q);

    void parseVerifyEmailAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifyEmailAddressResponse)
    Q_DISABLE_COPY(VerifyEmailAddressResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
