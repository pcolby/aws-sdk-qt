// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREMEDIATIONEXECUTIONRESPONSE_H
#define QTAWS_STARTREMEDIATIONEXECUTIONRESPONSE_H

#include "configserviceresponse.h"
#include "startremediationexecutionrequest.h"

namespace QtAws {
namespace ConfigService {

class StartRemediationExecutionResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT StartRemediationExecutionResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    StartRemediationExecutionResponse(const StartRemediationExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartRemediationExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRemediationExecutionResponse)
    Q_DISABLE_COPY(StartRemediationExecutionResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
