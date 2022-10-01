// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYVPCATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcAttributeResponse;

class ModifyVpcAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpcAttributeResponsePrivate(ModifyVpcAttributeResponse * const q);

    void parseModifyVpcAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpcAttributeResponse)
    Q_DISABLE_COPY(ModifyVpcAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
