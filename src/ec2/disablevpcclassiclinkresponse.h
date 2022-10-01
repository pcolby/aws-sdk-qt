// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVPCCLASSICLINKRESPONSE_H
#define QTAWS_DISABLEVPCCLASSICLINKRESPONSE_H

#include "ec2response.h"
#include "disablevpcclassiclinkrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableVpcClassicLinkResponsePrivate;

class QTAWSEC2_EXPORT DisableVpcClassicLinkResponse : public Ec2Response {
    Q_OBJECT

public:
    DisableVpcClassicLinkResponse(const DisableVpcClassicLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableVpcClassicLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableVpcClassicLinkResponse)
    Q_DISABLE_COPY(DisableVpcClassicLinkResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
