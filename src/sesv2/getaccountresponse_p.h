// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTRESPONSE_P_H
#define QTAWS_GETACCOUNTRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetAccountResponse;

class GetAccountResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetAccountResponsePrivate(GetAccountResponse * const q);

    void parseGetAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountResponse)
    Q_DISABLE_COPY(GetAccountResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
