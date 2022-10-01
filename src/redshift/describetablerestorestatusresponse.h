// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLERESTORESTATUSRESPONSE_H
#define QTAWS_DESCRIBETABLERESTORESTATUSRESPONSE_H

#include "redshiftresponse.h"
#include "describetablerestorestatusrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeTableRestoreStatusResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeTableRestoreStatusResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeTableRestoreStatusResponse(const DescribeTableRestoreStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTableRestoreStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTableRestoreStatusResponse)
    Q_DISABLE_COPY(DescribeTableRestoreStatusResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
