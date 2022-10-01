// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESFORCONSUMERRESPONSE_H
#define QTAWS_DESCRIBEDATASHARESFORCONSUMERRESPONSE_H

#include "redshiftresponse.h"
#include "describedatasharesforconsumerrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesForConsumerResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeDataSharesForConsumerResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeDataSharesForConsumerResponse(const DescribeDataSharesForConsumerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataSharesForConsumerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSharesForConsumerResponse)
    Q_DISABLE_COPY(DescribeDataSharesForConsumerResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
