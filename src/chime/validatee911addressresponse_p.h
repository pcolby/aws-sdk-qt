// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEE911ADDRESSRESPONSE_P_H
#define QTAWS_VALIDATEE911ADDRESSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ValidateE911AddressResponse;

class ValidateE911AddressResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ValidateE911AddressResponsePrivate(ValidateE911AddressResponse * const q);

    void parseValidateE911AddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ValidateE911AddressResponse)
    Q_DISABLE_COPY(ValidateE911AddressResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
