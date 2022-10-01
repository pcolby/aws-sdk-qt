// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTETABLESRESPONSE_H
#define QTAWS_DESCRIBEROUTETABLESRESPONSE_H

#include "ec2response.h"
#include "describeroutetablesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeRouteTablesResponsePrivate;

class QTAWSEC2_EXPORT DescribeRouteTablesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeRouteTablesResponse(const DescribeRouteTablesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRouteTablesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRouteTablesResponse)
    Q_DISABLE_COPY(DescribeRouteTablesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
