// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBSRESPONSE_H
#define QTAWS_DESCRIBEJOBSRESPONSE_H

#include "mgnresponse.h"
#include "describejobsrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeJobsResponsePrivate;

class QTAWSMGN_EXPORT DescribeJobsResponse : public MgnResponse {
    Q_OBJECT

public:
    DescribeJobsResponse(const DescribeJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobsResponse)
    Q_DISABLE_COPY(DescribeJobsResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
