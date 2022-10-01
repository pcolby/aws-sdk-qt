// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVPCCLASSICLINKRESPONSE_P_H
#define QTAWS_DISABLEVPCCLASSICLINKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisableVpcClassicLinkResponse;

class DisableVpcClassicLinkResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisableVpcClassicLinkResponsePrivate(DisableVpcClassicLinkResponse * const q);

    void parseDisableVpcClassicLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableVpcClassicLinkResponse)
    Q_DISABLE_COPY(DisableVpcClassicLinkResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
