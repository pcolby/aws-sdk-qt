// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERVERSIONSRESPONSE_H
#define QTAWS_DESCRIBECLUSTERVERSIONSRESPONSE_H

#include "redshiftresponse.h"
#include "describeclusterversionsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterVersionsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterVersionsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeClusterVersionsResponse(const DescribeClusterVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterVersionsResponse)
    Q_DISABLE_COPY(DescribeClusterVersionsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
