// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCLASSICLINKVPCRESPONSE_P_H
#define QTAWS_DETACHCLASSICLINKVPCRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DetachClassicLinkVpcResponse;

class DetachClassicLinkVpcResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DetachClassicLinkVpcResponsePrivate(DetachClassicLinkVpcResponse * const q);

    void parseDetachClassicLinkVpcResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachClassicLinkVpcResponse)
    Q_DISABLE_COPY(DetachClassicLinkVpcResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
