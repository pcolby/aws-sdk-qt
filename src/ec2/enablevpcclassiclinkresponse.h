// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVPCCLASSICLINKRESPONSE_H
#define QTAWS_ENABLEVPCCLASSICLINKRESPONSE_H

#include "ec2response.h"
#include "enablevpcclassiclinkrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableVpcClassicLinkResponsePrivate;

class QTAWSEC2_EXPORT EnableVpcClassicLinkResponse : public Ec2Response {
    Q_OBJECT

public:
    EnableVpcClassicLinkResponse(const EnableVpcClassicLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableVpcClassicLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableVpcClassicLinkResponse)
    Q_DISABLE_COPY(EnableVpcClassicLinkResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
