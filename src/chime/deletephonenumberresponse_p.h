// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPHONENUMBERRESPONSE_P_H
#define QTAWS_DELETEPHONENUMBERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeletePhoneNumberResponse;

class DeletePhoneNumberResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeletePhoneNumberResponsePrivate(DeletePhoneNumberResponse * const q);

    void parseDeletePhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePhoneNumberResponse)
    Q_DISABLE_COPY(DeletePhoneNumberResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
