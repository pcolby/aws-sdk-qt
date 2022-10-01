// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMACHINEFOREXECUTIONRESPONSE_H
#define QTAWS_DESCRIBESTATEMACHINEFOREXECUTIONRESPONSE_H

#include "sfnresponse.h"
#include "describestatemachineforexecutionrequest.h"

namespace QtAws {
namespace Sfn {

class DescribeStateMachineForExecutionResponsePrivate;

class QTAWSSFN_EXPORT DescribeStateMachineForExecutionResponse : public SfnResponse {
    Q_OBJECT

public:
    DescribeStateMachineForExecutionResponse(const DescribeStateMachineForExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStateMachineForExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStateMachineForExecutionResponse)
    Q_DISABLE_COPY(DescribeStateMachineForExecutionResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
