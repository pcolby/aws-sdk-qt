// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICIPV4POOLRESPONSE_P_H
#define QTAWS_CREATEPUBLICIPV4POOLRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreatePublicIpv4PoolResponse;

class CreatePublicIpv4PoolResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreatePublicIpv4PoolResponsePrivate(CreatePublicIpv4PoolResponse * const q);

    void parseCreatePublicIpv4PoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePublicIpv4PoolResponse)
    Q_DISABLE_COPY(CreatePublicIpv4PoolResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
