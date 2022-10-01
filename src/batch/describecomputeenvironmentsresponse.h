// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPUTEENVIRONMENTSRESPONSE_H
#define QTAWS_DESCRIBECOMPUTEENVIRONMENTSRESPONSE_H

#include "batchresponse.h"
#include "describecomputeenvironmentsrequest.h"

namespace QtAws {
namespace Batch {

class DescribeComputeEnvironmentsResponsePrivate;

class QTAWSBATCH_EXPORT DescribeComputeEnvironmentsResponse : public BatchResponse {
    Q_OBJECT

public:
    DescribeComputeEnvironmentsResponse(const DescribeComputeEnvironmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeComputeEnvironmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComputeEnvironmentsResponse)
    Q_DISABLE_COPY(DescribeComputeEnvironmentsResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
