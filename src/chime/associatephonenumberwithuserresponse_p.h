// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERWITHUSERRESPONSE_P_H
#define QTAWS_ASSOCIATEPHONENUMBERWITHUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumberWithUserResponse;

class AssociatePhoneNumberWithUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit AssociatePhoneNumberWithUserResponsePrivate(AssociatePhoneNumberWithUserResponse * const q);

    void parseAssociatePhoneNumberWithUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociatePhoneNumberWithUserResponse)
    Q_DISABLE_COPY(AssociatePhoneNumberWithUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
