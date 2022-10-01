// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONBYOIPCIDRRESPONSE_P_H
#define QTAWS_DEPROVISIONBYOIPCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionByoipCidrResponse;

class DeprovisionByoipCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeprovisionByoipCidrResponsePrivate(DeprovisionByoipCidrResponse * const q);

    void parseDeprovisionByoipCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeprovisionByoipCidrResponse)
    Q_DISABLE_COPY(DeprovisionByoipCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
