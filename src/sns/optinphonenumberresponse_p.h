// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPTINPHONENUMBERRESPONSE_P_H
#define QTAWS_OPTINPHONENUMBERRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class OptInPhoneNumberResponse;

class OptInPhoneNumberResponsePrivate : public SnsResponsePrivate {

public:

    explicit OptInPhoneNumberResponsePrivate(OptInPhoneNumberResponse * const q);

    void parseOptInPhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(OptInPhoneNumberResponse)
    Q_DISABLE_COPY(OptInPhoneNumberResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
