// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTHUMANLOOPRESPONSE_H
#define QTAWS_STARTHUMANLOOPRESPONSE_H

#include "sagemakera2iruntimeresponse.h"
#include "starthumanlooprequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class StartHumanLoopResponsePrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT StartHumanLoopResponse : public SageMakerA2IRuntimeResponse {
    Q_OBJECT

public:
    StartHumanLoopResponse(const StartHumanLoopRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartHumanLoopRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartHumanLoopResponse)
    Q_DISABLE_COPY(StartHumanLoopResponse)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
