// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCLASSICLINKRESPONSE_H
#define QTAWS_DESCRIBEVPCCLASSICLINKRESPONSE_H

#include "ec2response.h"
#include "describevpcclassiclinkrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcClassicLinkResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpcClassicLinkResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpcClassicLinkResponse(const DescribeVpcClassicLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcClassicLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcClassicLinkResponse)
    Q_DISABLE_COPY(DescribeVpcClassicLinkResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
