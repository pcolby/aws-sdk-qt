// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDACTIONSRESPONSE_H
#define QTAWS_DESCRIBESCHEDULEDACTIONSRESPONSE_H

#include "redshiftresponse.h"
#include "describescheduledactionsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeScheduledActionsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeScheduledActionsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeScheduledActionsResponse(const DescribeScheduledActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScheduledActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduledActionsResponse)
    Q_DISABLE_COPY(DescribeScheduledActionsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
