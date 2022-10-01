// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVPCCLASSICLINKRESPONSE_P_H
#define QTAWS_ENABLEVPCCLASSICLINKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableVpcClassicLinkResponse;

class EnableVpcClassicLinkResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableVpcClassicLinkResponsePrivate(EnableVpcClassicLinkResponse * const q);

    void parseEnableVpcClassicLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableVpcClassicLinkResponse)
    Q_DISABLE_COPY(EnableVpcClassicLinkResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
