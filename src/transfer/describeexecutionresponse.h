// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXECUTIONRESPONSE_H
#define QTAWS_DESCRIBEEXECUTIONRESPONSE_H

#include "transferresponse.h"
#include "describeexecutionrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeExecutionResponsePrivate;

class QTAWSTRANSFER_EXPORT DescribeExecutionResponse : public TransferResponse {
    Q_OBJECT

public:
    DescribeExecutionResponse(const DescribeExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExecutionResponse)
    Q_DISABLE_COPY(DescribeExecutionResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
