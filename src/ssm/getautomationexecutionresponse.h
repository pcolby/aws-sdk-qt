// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOMATIONEXECUTIONRESPONSE_H
#define QTAWS_GETAUTOMATIONEXECUTIONRESPONSE_H

#include "ssmresponse.h"
#include "getautomationexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class GetAutomationExecutionResponsePrivate;

class QTAWSSSM_EXPORT GetAutomationExecutionResponse : public SsmResponse {
    Q_OBJECT

public:
    GetAutomationExecutionResponse(const GetAutomationExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAutomationExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAutomationExecutionResponse)
    Q_DISABLE_COPY(GetAutomationExecutionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
