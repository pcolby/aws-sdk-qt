// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAUTOMATIONEXECUTIONRESPONSE_H
#define QTAWS_STOPAUTOMATIONEXECUTIONRESPONSE_H

#include "ssmresponse.h"
#include "stopautomationexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class StopAutomationExecutionResponsePrivate;

class QTAWSSSM_EXPORT StopAutomationExecutionResponse : public SsmResponse {
    Q_OBJECT

public:
    StopAutomationExecutionResponse(const StopAutomationExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopAutomationExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAutomationExecutionResponse)
    Q_DISABLE_COPY(StopAutomationExecutionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
