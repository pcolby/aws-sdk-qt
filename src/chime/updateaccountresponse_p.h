// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTRESPONSE_P_H
#define QTAWS_UPDATEACCOUNTRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateAccountResponse;

class UpdateAccountResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateAccountResponsePrivate(UpdateAccountResponse * const q);

    void parseUpdateAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAccountResponse)
    Q_DISABLE_COPY(UpdateAccountResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
