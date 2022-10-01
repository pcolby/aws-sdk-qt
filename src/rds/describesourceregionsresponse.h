// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCEREGIONSRESPONSE_H
#define QTAWS_DESCRIBESOURCEREGIONSRESPONSE_H

#include "rdsresponse.h"
#include "describesourceregionsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeSourceRegionsResponsePrivate;

class QTAWSRDS_EXPORT DescribeSourceRegionsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeSourceRegionsResponse(const DescribeSourceRegionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSourceRegionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSourceRegionsResponse)
    Q_DISABLE_COPY(DescribeSourceRegionsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
