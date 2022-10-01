// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSPATHSRESPONSE_H
#define QTAWS_DESCRIBENETWORKINSIGHTSPATHSRESPONSE_H

#include "ec2response.h"
#include "describenetworkinsightspathsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsPathsResponsePrivate;

class QTAWSEC2_EXPORT DescribeNetworkInsightsPathsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeNetworkInsightsPathsResponse(const DescribeNetworkInsightsPathsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNetworkInsightsPathsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInsightsPathsResponse)
    Q_DISABLE_COPY(DescribeNetworkInsightsPathsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
