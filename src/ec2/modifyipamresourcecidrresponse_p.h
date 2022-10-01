// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMRESOURCECIDRRESPONSE_P_H
#define QTAWS_MODIFYIPAMRESOURCECIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamResourceCidrResponse;

class ModifyIpamResourceCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyIpamResourceCidrResponsePrivate(ModifyIpamResourceCidrResponse * const q);

    void parseModifyIpamResourceCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyIpamResourceCidrResponse)
    Q_DISABLE_COPY(ModifyIpamResourceCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
