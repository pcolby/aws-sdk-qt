// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEGRESSONLYINTERNETGATEWAYSRESPONSE_H
#define QTAWS_DESCRIBEEGRESSONLYINTERNETGATEWAYSRESPONSE_H

#include "ec2response.h"
#include "describeegressonlyinternetgatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeEgressOnlyInternetGatewaysResponsePrivate;

class QTAWSEC2_EXPORT DescribeEgressOnlyInternetGatewaysResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeEgressOnlyInternetGatewaysResponse(const DescribeEgressOnlyInternetGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEgressOnlyInternetGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEgressOnlyInternetGatewaysResponse)
    Q_DISABLE_COPY(DescribeEgressOnlyInternetGatewaysResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
