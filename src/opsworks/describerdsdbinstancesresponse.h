// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERDSDBINSTANCESRESPONSE_H
#define QTAWS_DESCRIBERDSDBINSTANCESRESPONSE_H

#include "opsworksresponse.h"
#include "describerdsdbinstancesrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeRdsDbInstancesResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeRdsDbInstancesResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeRdsDbInstancesResponse(const DescribeRdsDbInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRdsDbInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRdsDbInstancesResponse)
    Q_DISABLE_COPY(DescribeRdsDbInstancesResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
