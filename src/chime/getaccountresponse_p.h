// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTRESPONSE_P_H
#define QTAWS_GETACCOUNTRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetAccountResponse;

class GetAccountResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetAccountResponsePrivate(GetAccountResponse * const q);

    void parseGetAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountResponse)
    Q_DISABLE_COPY(GetAccountResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
