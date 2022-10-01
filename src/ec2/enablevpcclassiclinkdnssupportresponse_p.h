// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVPCCLASSICLINKDNSSUPPORTRESPONSE_P_H
#define QTAWS_ENABLEVPCCLASSICLINKDNSSUPPORTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableVpcClassicLinkDnsSupportResponse;

class EnableVpcClassicLinkDnsSupportResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableVpcClassicLinkDnsSupportResponsePrivate(EnableVpcClassicLinkDnsSupportResponse * const q);

    void parseEnableVpcClassicLinkDnsSupportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableVpcClassicLinkDnsSupportResponse)
    Q_DISABLE_COPY(EnableVpcClassicLinkDnsSupportResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
