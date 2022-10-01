// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPHUMANLOOPRESPONSE_H
#define QTAWS_STOPHUMANLOOPRESPONSE_H

#include "sagemakera2iruntimeresponse.h"
#include "stophumanlooprequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class StopHumanLoopResponsePrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT StopHumanLoopResponse : public SageMakerA2IRuntimeResponse {
    Q_OBJECT

public:
    StopHumanLoopResponse(const StopHumanLoopRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopHumanLoopRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopHumanLoopResponse)
    Q_DISABLE_COPY(StopHumanLoopResponse)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
