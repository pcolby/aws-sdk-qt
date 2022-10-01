// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERFROMUSERRESPONSE_P_H
#define QTAWS_DISASSOCIATEPHONENUMBERFROMUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumberFromUserResponse;

class DisassociatePhoneNumberFromUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DisassociatePhoneNumberFromUserResponsePrivate(DisassociatePhoneNumberFromUserResponse * const q);

    void parseDisassociatePhoneNumberFromUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociatePhoneNumberFromUserResponse)
    Q_DISABLE_COPY(DisassociatePhoneNumberFromUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
