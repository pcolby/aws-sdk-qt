// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSUBNETATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYSUBNETATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifySubnetAttributeResponse;

class ModifySubnetAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifySubnetAttributeResponsePrivate(ModifySubnetAttributeResponse * const q);

    void parseModifySubnetAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifySubnetAttributeResponse)
    Q_DISABLE_COPY(ModifySubnetAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
