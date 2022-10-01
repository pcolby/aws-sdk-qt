// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTIONGROUPSRESPONSE_H
#define QTAWS_DESCRIBEOPTIONGROUPSRESPONSE_H

#include "rdsresponse.h"
#include "describeoptiongroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeOptionGroupsResponsePrivate;

class QTAWSRDS_EXPORT DescribeOptionGroupsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeOptionGroupsResponse(const DescribeOptionGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOptionGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOptionGroupsResponse)
    Q_DISABLE_COPY(DescribeOptionGroupsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
