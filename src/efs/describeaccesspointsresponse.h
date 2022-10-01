// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSPOINTSRESPONSE_H
#define QTAWS_DESCRIBEACCESSPOINTSRESPONSE_H

#include "efsresponse.h"
#include "describeaccesspointsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeAccessPointsResponsePrivate;

class QTAWSEFS_EXPORT DescribeAccessPointsResponse : public EfsResponse {
    Q_OBJECT

public:
    DescribeAccessPointsResponse(const DescribeAccessPointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccessPointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccessPointsResponse)
    Q_DISABLE_COPY(DescribeAccessPointsResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
