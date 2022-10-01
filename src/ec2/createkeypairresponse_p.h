// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYPAIRRESPONSE_P_H
#define QTAWS_CREATEKEYPAIRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateKeyPairResponse;

class CreateKeyPairResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateKeyPairResponsePrivate(CreateKeyPairResponse * const q);

    void parseCreateKeyPairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateKeyPairResponse)
    Q_DISABLE_COPY(CreateKeyPairResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
