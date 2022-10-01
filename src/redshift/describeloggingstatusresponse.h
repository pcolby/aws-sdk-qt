// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGSTATUSRESPONSE_H
#define QTAWS_DESCRIBELOGGINGSTATUSRESPONSE_H

#include "redshiftresponse.h"
#include "describeloggingstatusrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeLoggingStatusResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeLoggingStatusResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeLoggingStatusResponse(const DescribeLoggingStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLoggingStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoggingStatusResponse)
    Q_DISABLE_COPY(DescribeLoggingStatusResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
