// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCLASSICLINKDNSSUPPORTRESPONSE_H
#define QTAWS_DESCRIBEVPCCLASSICLINKDNSSUPPORTRESPONSE_H

#include "ec2response.h"
#include "describevpcclassiclinkdnssupportrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcClassicLinkDnsSupportResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpcClassicLinkDnsSupportResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpcClassicLinkDnsSupportResponse(const DescribeVpcClassicLinkDnsSupportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcClassicLinkDnsSupportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcClassicLinkDnsSupportResponse)
    Q_DISABLE_COPY(DescribeVpcClassicLinkDnsSupportResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
