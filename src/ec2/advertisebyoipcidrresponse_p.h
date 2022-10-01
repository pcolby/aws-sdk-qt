// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADVERTISEBYOIPCIDRRESPONSE_P_H
#define QTAWS_ADVERTISEBYOIPCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AdvertiseByoipCidrResponse;

class AdvertiseByoipCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AdvertiseByoipCidrResponsePrivate(AdvertiseByoipCidrResponse * const q);

    void parseAdvertiseByoipCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdvertiseByoipCidrResponse)
    Q_DISABLE_COPY(AdvertiseByoipCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
