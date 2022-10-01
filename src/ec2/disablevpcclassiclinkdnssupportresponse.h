// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVPCCLASSICLINKDNSSUPPORTRESPONSE_H
#define QTAWS_DISABLEVPCCLASSICLINKDNSSUPPORTRESPONSE_H

#include "ec2response.h"
#include "disablevpcclassiclinkdnssupportrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableVpcClassicLinkDnsSupportResponsePrivate;

class QTAWSEC2_EXPORT DisableVpcClassicLinkDnsSupportResponse : public Ec2Response {
    Q_OBJECT

public:
    DisableVpcClassicLinkDnsSupportResponse(const DisableVpcClassicLinkDnsSupportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableVpcClassicLinkDnsSupportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableVpcClassicLinkDnsSupportResponse)
    Q_DISABLE_COPY(DisableVpcClassicLinkDnsSupportResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
