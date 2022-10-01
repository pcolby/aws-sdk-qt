// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMRESPONSE_P_H
#define QTAWS_CREATEIPAMRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamResponse;

class CreateIpamResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateIpamResponsePrivate(CreateIpamResponse * const q);

    void parseCreateIpamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIpamResponse)
    Q_DISABLE_COPY(CreateIpamResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
