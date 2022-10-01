// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPESRESPONSE_H
#define QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPESRESPONSE_H

#include "ec2response.h"
#include "describenetworkinsightsaccessscopesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAccessScopesResponsePrivate;

class QTAWSEC2_EXPORT DescribeNetworkInsightsAccessScopesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeNetworkInsightsAccessScopesResponse(const DescribeNetworkInsightsAccessScopesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNetworkInsightsAccessScopesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInsightsAccessScopesResponse)
    Q_DISABLE_COPY(DescribeNetworkInsightsAccessScopesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
