// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTOVERVIEWRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTOVERVIEWRESPONSE_H

#include "devopsgururesponse.h"
#include "describeaccountoverviewrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAccountOverviewResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeAccountOverviewResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeAccountOverviewResponse(const DescribeAccountOverviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountOverviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountOverviewResponse)
    Q_DISABLE_COPY(DescribeAccountOverviewResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
