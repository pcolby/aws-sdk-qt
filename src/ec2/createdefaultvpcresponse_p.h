// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEFAULTVPCRESPONSE_P_H
#define QTAWS_CREATEDEFAULTVPCRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateDefaultVpcResponse;

class CreateDefaultVpcResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateDefaultVpcResponsePrivate(CreateDefaultVpcResponse * const q);

    void parseCreateDefaultVpcResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDefaultVpcResponse)
    Q_DISABLE_COPY(CreateDefaultVpcResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
