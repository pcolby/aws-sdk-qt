// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERBACKTRACKSRESPONSE_H
#define QTAWS_DESCRIBEDBCLUSTERBACKTRACKSRESPONSE_H

#include "rdsresponse.h"
#include "describedbclusterbacktracksrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterBacktracksResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBClusterBacktracksResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBClusterBacktracksResponse(const DescribeDBClusterBacktracksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBClusterBacktracksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterBacktracksResponse)
    Q_DISABLE_COPY(DescribeDBClusterBacktracksResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
