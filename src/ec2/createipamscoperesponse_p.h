// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMSCOPERESPONSE_P_H
#define QTAWS_CREATEIPAMSCOPERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamScopeResponse;

class CreateIpamScopeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateIpamScopeResponsePrivate(CreateIpamScopeResponse * const q);

    void parseCreateIpamScopeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIpamScopeResponse)
    Q_DISABLE_COPY(CreateIpamScopeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
