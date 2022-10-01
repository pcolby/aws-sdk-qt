// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPHONENUMBERORDERRESPONSE_P_H
#define QTAWS_CREATEPHONENUMBERORDERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreatePhoneNumberOrderResponse;

class CreatePhoneNumberOrderResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreatePhoneNumberOrderResponsePrivate(CreatePhoneNumberOrderResponse * const q);

    void parseCreatePhoneNumberOrderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePhoneNumberOrderResponse)
    Q_DISABLE_COPY(CreatePhoneNumberOrderResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
