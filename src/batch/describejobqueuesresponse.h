// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBQUEUESRESPONSE_H
#define QTAWS_DESCRIBEJOBQUEUESRESPONSE_H

#include "batchresponse.h"
#include "describejobqueuesrequest.h"

namespace QtAws {
namespace Batch {

class DescribeJobQueuesResponsePrivate;

class QTAWSBATCH_EXPORT DescribeJobQueuesResponse : public BatchResponse {
    Q_OBJECT

public:
    DescribeJobQueuesResponse(const DescribeJobQueuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobQueuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobQueuesResponse)
    Q_DISABLE_COPY(DescribeJobQueuesResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
