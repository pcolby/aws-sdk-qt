// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSAGELIMITSRESPONSE_H
#define QTAWS_DESCRIBEUSAGELIMITSRESPONSE_H

#include "redshiftresponse.h"
#include "describeusagelimitsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeUsageLimitsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeUsageLimitsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeUsageLimitsResponse(const DescribeUsageLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUsageLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUsageLimitsResponse)
    Q_DISABLE_COPY(DescribeUsageLimitsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
