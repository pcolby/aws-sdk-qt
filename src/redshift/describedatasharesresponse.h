// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESRESPONSE_H
#define QTAWS_DESCRIBEDATASHARESRESPONSE_H

#include "redshiftresponse.h"
#include "describedatasharesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeDataSharesResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeDataSharesResponse(const DescribeDataSharesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataSharesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSharesResponse)
    Q_DISABLE_COPY(DescribeDataSharesResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
