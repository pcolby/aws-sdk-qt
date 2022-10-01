// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYPAIRRESPONSE_P_H
#define QTAWS_CREATEKEYPAIRRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateKeyPairResponse;

class CreateKeyPairResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateKeyPairResponsePrivate(CreateKeyPairResponse * const q);

    void parseCreateKeyPairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateKeyPairResponse)
    Q_DISABLE_COPY(CreateKeyPairResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
