// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTERNETGATEWAYSRESPONSE_H
#define QTAWS_DESCRIBEINTERNETGATEWAYSRESPONSE_H

#include "ec2response.h"
#include "describeinternetgatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInternetGatewaysResponsePrivate;

class QTAWSEC2_EXPORT DescribeInternetGatewaysResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeInternetGatewaysResponse(const DescribeInternetGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInternetGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInternetGatewaysResponse)
    Q_DISABLE_COPY(DescribeInternetGatewaysResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
