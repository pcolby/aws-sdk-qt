// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTRESPONSE_P_H
#define QTAWS_CREATEACCOUNTRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateAccountResponse;

class CreateAccountResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateAccountResponsePrivate(CreateAccountResponse * const q);

    void parseCreateAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccountResponse)
    Q_DISABLE_COPY(CreateAccountResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
