// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLASSICLINKINSTANCESRESPONSE_H
#define QTAWS_DESCRIBECLASSICLINKINSTANCESRESPONSE_H

#include "ec2response.h"
#include "describeclassiclinkinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClassicLinkInstancesResponsePrivate;

class QTAWSEC2_EXPORT DescribeClassicLinkInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeClassicLinkInstancesResponse(const DescribeClassicLinkInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClassicLinkInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClassicLinkInstancesResponse)
    Q_DISABLE_COPY(DescribeClassicLinkInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
