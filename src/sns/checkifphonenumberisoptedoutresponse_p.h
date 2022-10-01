// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKIFPHONENUMBERISOPTEDOUTRESPONSE_P_H
#define QTAWS_CHECKIFPHONENUMBERISOPTEDOUTRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class CheckIfPhoneNumberIsOptedOutResponse;

class CheckIfPhoneNumberIsOptedOutResponsePrivate : public SnsResponsePrivate {

public:

    explicit CheckIfPhoneNumberIsOptedOutResponsePrivate(CheckIfPhoneNumberIsOptedOutResponse * const q);

    void parseCheckIfPhoneNumberIsOptedOutResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CheckIfPhoneNumberIsOptedOutResponse)
    Q_DISABLE_COPY(CheckIfPhoneNumberIsOptedOutResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
