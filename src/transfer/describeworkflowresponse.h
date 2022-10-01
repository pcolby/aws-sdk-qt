// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWRESPONSE_H
#define QTAWS_DESCRIBEWORKFLOWRESPONSE_H

#include "transferresponse.h"
#include "describeworkflowrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeWorkflowResponsePrivate;

class QTAWSTRANSFER_EXPORT DescribeWorkflowResponse : public TransferResponse {
    Q_OBJECT

public:
    DescribeWorkflowResponse(const DescribeWorkflowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkflowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkflowResponse)
    Q_DISABLE_COPY(DescribeWorkflowResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
