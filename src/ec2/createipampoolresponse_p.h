// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMPOOLRESPONSE_P_H
#define QTAWS_CREATEIPAMPOOLRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamPoolResponse;

class CreateIpamPoolResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateIpamPoolResponsePrivate(CreateIpamPoolResponse * const q);

    void parseCreateIpamPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIpamPoolResponse)
    Q_DISABLE_COPY(CreateIpamPoolResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
