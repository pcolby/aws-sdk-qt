// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVPCCLASSICLINKDNSSUPPORTRESPONSE_P_H
#define QTAWS_DISABLEVPCCLASSICLINKDNSSUPPORTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisableVpcClassicLinkDnsSupportResponse;

class DisableVpcClassicLinkDnsSupportResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisableVpcClassicLinkDnsSupportResponsePrivate(DisableVpcClassicLinkDnsSupportResponse * const q);

    void parseDisableVpcClassicLinkDnsSupportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableVpcClassicLinkDnsSupportResponse)
    Q_DISABLE_COPY(DisableVpcClassicLinkDnsSupportResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
