// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUMANLOOPRESPONSE_H
#define QTAWS_DESCRIBEHUMANLOOPRESPONSE_H

#include "sagemakera2iruntimeresponse.h"
#include "describehumanlooprequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class DescribeHumanLoopResponsePrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT DescribeHumanLoopResponse : public SageMakerA2IRuntimeResponse {
    Q_OBJECT

public:
    DescribeHumanLoopResponse(const DescribeHumanLoopRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHumanLoopRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHumanLoopResponse)
    Q_DISABLE_COPY(DescribeHumanLoopResponse)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
