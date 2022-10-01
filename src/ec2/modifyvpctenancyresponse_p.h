// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCTENANCYRESPONSE_P_H
#define QTAWS_MODIFYVPCTENANCYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcTenancyResponse;

class ModifyVpcTenancyResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpcTenancyResponsePrivate(ModifyVpcTenancyResponse * const q);

    void parseModifyVpcTenancyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpcTenancyResponse)
    Q_DISABLE_COPY(ModifyVpcTenancyResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
