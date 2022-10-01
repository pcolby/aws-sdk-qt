// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCLASSICLINKVPCRESPONSE_P_H
#define QTAWS_ATTACHCLASSICLINKVPCRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AttachClassicLinkVpcResponse;

class AttachClassicLinkVpcResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AttachClassicLinkVpcResponsePrivate(AttachClassicLinkVpcResponse * const q);

    void parseAttachClassicLinkVpcResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachClassicLinkVpcResponse)
    Q_DISABLE_COPY(AttachClassicLinkVpcResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
