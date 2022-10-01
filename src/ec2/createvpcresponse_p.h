// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCRESPONSE_P_H
#define QTAWS_CREATEVPCRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcResponse;

class CreateVpcResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateVpcResponsePrivate(CreateVpcResponse * const q);

    void parseCreateVpcResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpcResponse)
    Q_DISABLE_COPY(CreateVpcResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
