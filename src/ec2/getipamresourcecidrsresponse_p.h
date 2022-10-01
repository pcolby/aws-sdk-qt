// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMRESOURCECIDRSRESPONSE_P_H
#define QTAWS_GETIPAMRESOURCECIDRSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetIpamResourceCidrsResponse;

class GetIpamResourceCidrsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetIpamResourceCidrsResponsePrivate(GetIpamResourceCidrsResponse * const q);

    void parseGetIpamResourceCidrsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIpamResourceCidrsResponse)
    Q_DISABLE_COPY(GetIpamResourceCidrsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
