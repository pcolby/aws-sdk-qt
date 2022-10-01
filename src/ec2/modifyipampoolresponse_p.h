// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMPOOLRESPONSE_P_H
#define QTAWS_MODIFYIPAMPOOLRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamPoolResponse;

class ModifyIpamPoolResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyIpamPoolResponsePrivate(ModifyIpamPoolResponse * const q);

    void parseModifyIpamPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyIpamPoolResponse)
    Q_DISABLE_COPY(ModifyIpamPoolResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
