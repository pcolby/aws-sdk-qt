// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDRESSRESPONSE_P_H
#define QTAWS_CREATEADDRESSRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class CreateAddressResponse;

class CreateAddressResponsePrivate : public SnowballResponsePrivate {

public:

    explicit CreateAddressResponsePrivate(CreateAddressResponse * const q);

    void parseCreateAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAddressResponse)
    Q_DISABLE_COPY(CreateAddressResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
