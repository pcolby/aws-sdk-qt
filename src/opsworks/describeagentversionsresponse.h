// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTVERSIONSRESPONSE_H
#define QTAWS_DESCRIBEAGENTVERSIONSRESPONSE_H

#include "opsworksresponse.h"
#include "describeagentversionsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeAgentVersionsResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeAgentVersionsResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeAgentVersionsResponse(const DescribeAgentVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAgentVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAgentVersionsResponse)
    Q_DISABLE_COPY(DescribeAgentVersionsResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
