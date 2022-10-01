// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSPEECHSYNTHESISTASKRESPONSE_H
#define QTAWS_STARTSPEECHSYNTHESISTASKRESPONSE_H

#include "pollyresponse.h"
#include "startspeechsynthesistaskrequest.h"

namespace QtAws {
namespace Polly {

class StartSpeechSynthesisTaskResponsePrivate;

class QTAWSPOLLY_EXPORT StartSpeechSynthesisTaskResponse : public PollyResponse {
    Q_OBJECT

public:
    StartSpeechSynthesisTaskResponse(const StartSpeechSynthesisTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSpeechSynthesisTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSpeechSynthesisTaskResponse)
    Q_DISABLE_COPY(StartSpeechSynthesisTaskResponse)

};

} // namespace Polly
} // namespace QtAws

#endif
