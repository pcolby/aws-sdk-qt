// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTRESPONSE_P_H
#define QTAWS_DELETEACCOUNTRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteAccountResponse;

class DeleteAccountResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteAccountResponsePrivate(DeleteAccountResponse * const q);

    void parseDeleteAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccountResponse)
    Q_DISABLE_COPY(DeleteAccountResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
