// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERENDPOINTSRESPONSE_H
#define QTAWS_DESCRIBEDBCLUSTERENDPOINTSRESPONSE_H

#include "neptuneresponse.h"
#include "describedbclusterendpointsrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClusterEndpointsResponsePrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBClusterEndpointsResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DescribeDBClusterEndpointsResponse(const DescribeDBClusterEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBClusterEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterEndpointsResponse)
    Q_DISABLE_COPY(DescribeDBClusterEndpointsResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
