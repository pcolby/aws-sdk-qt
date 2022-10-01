// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONOVERVIEWRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONOVERVIEWRESPONSE_H

#include "devopsgururesponse.h"
#include "describeorganizationoverviewrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationOverviewResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeOrganizationOverviewResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeOrganizationOverviewResponse(const DescribeOrganizationOverviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationOverviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationOverviewResponse)
    Q_DISABLE_COPY(DescribeOrganizationOverviewResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
