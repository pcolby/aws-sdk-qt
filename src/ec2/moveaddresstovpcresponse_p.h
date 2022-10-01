// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEADDRESSTOVPCRESPONSE_P_H
#define QTAWS_MOVEADDRESSTOVPCRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class MoveAddressToVpcResponse;

class MoveAddressToVpcResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit MoveAddressToVpcResponsePrivate(MoveAddressToVpcResponse * const q);

    void parseMoveAddressToVpcResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MoveAddressToVpcResponse)
    Q_DISABLE_COPY(MoveAddressToVpcResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
