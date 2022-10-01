// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAUTOMATIONEXECUTIONRESPONSE_H
#define QTAWS_STARTAUTOMATIONEXECUTIONRESPONSE_H

#include "ssmresponse.h"
#include "startautomationexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class StartAutomationExecutionResponsePrivate;

class QTAWSSSM_EXPORT StartAutomationExecutionResponse : public SsmResponse {
    Q_OBJECT

public:
    StartAutomationExecutionResponse(const StartAutomationExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAutomationExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAutomationExecutionResponse)
    Q_DISABLE_COPY(StartAutomationExecutionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
