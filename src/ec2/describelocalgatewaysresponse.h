// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYSRESPONSE_H
#define QTAWS_DESCRIBELOCALGATEWAYSRESPONSE_H

#include "ec2response.h"
#include "describelocalgatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewaysResponsePrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewaysResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeLocalGatewaysResponse(const DescribeLocalGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocalGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewaysResponse)
    Q_DISABLE_COPY(DescribeLocalGatewaysResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
