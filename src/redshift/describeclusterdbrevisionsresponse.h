// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERDBREVISIONSRESPONSE_H
#define QTAWS_DESCRIBECLUSTERDBREVISIONSRESPONSE_H

#include "redshiftresponse.h"
#include "describeclusterdbrevisionsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterDbRevisionsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterDbRevisionsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeClusterDbRevisionsResponse(const DescribeClusterDbRevisionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterDbRevisionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterDbRevisionsResponse)
    Q_DISABLE_COPY(DescribeClusterDbRevisionsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
