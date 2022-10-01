// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDHCPOPTIONSRESPONSE_P_H
#define QTAWS_CREATEDHCPOPTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateDhcpOptionsResponse;

class CreateDhcpOptionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateDhcpOptionsResponsePrivate(CreateDhcpOptionsResponse * const q);

    void parseCreateDhcpOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDhcpOptionsResponse)
    Q_DISABLE_COPY(CreateDhcpOptionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
