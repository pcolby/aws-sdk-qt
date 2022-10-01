// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYPRIVATEDNSNAMEOPTIONSRESPONSE_P_H
#define QTAWS_MODIFYPRIVATEDNSNAMEOPTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyPrivateDnsNameOptionsResponse;

class ModifyPrivateDnsNameOptionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyPrivateDnsNameOptionsResponsePrivate(ModifyPrivateDnsNameOptionsResponse * const q);

    void parseModifyPrivateDnsNameOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyPrivateDnsNameOptionsResponse)
    Q_DISABLE_COPY(ModifyPrivateDnsNameOptionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
