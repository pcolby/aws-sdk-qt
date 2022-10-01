// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEECSCLUSTERSRESPONSE_H
#define QTAWS_DESCRIBEECSCLUSTERSRESPONSE_H

#include "opsworksresponse.h"
#include "describeecsclustersrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeEcsClustersResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeEcsClustersResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeEcsClustersResponse(const DescribeEcsClustersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEcsClustersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEcsClustersResponse)
    Q_DISABLE_COPY(DescribeEcsClustersResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
