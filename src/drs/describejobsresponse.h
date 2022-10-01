// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBSRESPONSE_H
#define QTAWS_DESCRIBEJOBSRESPONSE_H

#include "drsresponse.h"
#include "describejobsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeJobsResponsePrivate;

class QTAWSDRS_EXPORT DescribeJobsResponse : public DrsResponse {
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

} // namespace Drs
} // namespace QtAws

#endif
