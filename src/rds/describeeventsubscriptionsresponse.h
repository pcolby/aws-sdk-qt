// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSUBSCRIPTIONSRESPONSE_H
#define QTAWS_DESCRIBEEVENTSUBSCRIPTIONSRESPONSE_H

#include "rdsresponse.h"
#include "describeeventsubscriptionsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeEventSubscriptionsResponsePrivate;

class QTAWSRDS_EXPORT DescribeEventSubscriptionsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeEventSubscriptionsResponse(const DescribeEventSubscriptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventSubscriptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventSubscriptionsResponse)
    Q_DISABLE_COPY(DescribeEventSubscriptionsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
