// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSRESPONSE_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSRESPONSE_H

#include "neptuneresponse.h"
#include "describedbclusterparametergroupsrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClusterParameterGroupsResponsePrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBClusterParameterGroupsResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DescribeDBClusterParameterGroupsResponse(const DescribeDBClusterParameterGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBClusterParameterGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeDBClusterParameterGroupsResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
