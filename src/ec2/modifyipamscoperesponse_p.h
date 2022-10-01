// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMSCOPERESPONSE_P_H
#define QTAWS_MODIFYIPAMSCOPERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamScopeResponse;

class ModifyIpamScopeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyIpamScopeResponsePrivate(ModifyIpamScopeResponse * const q);

    void parseModifyIpamScopeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyIpamScopeResponse)
    Q_DISABLE_COPY(ModifyIpamScopeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
