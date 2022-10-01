// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONBYOIPCIDRRESPONSE_P_H
#define QTAWS_PROVISIONBYOIPCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ProvisionByoipCidrResponse;

class ProvisionByoipCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ProvisionByoipCidrResponsePrivate(ProvisionByoipCidrResponse * const q);

    void parseProvisionByoipCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ProvisionByoipCidrResponse)
    Q_DISABLE_COPY(ProvisionByoipCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
