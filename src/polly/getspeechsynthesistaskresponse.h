// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSPEECHSYNTHESISTASKRESPONSE_H
#define QTAWS_GETSPEECHSYNTHESISTASKRESPONSE_H

#include "pollyresponse.h"
#include "getspeechsynthesistaskrequest.h"

namespace QtAws {
namespace Polly {

class GetSpeechSynthesisTaskResponsePrivate;

class QTAWSPOLLY_EXPORT GetSpeechSynthesisTaskResponse : public PollyResponse {
    Q_OBJECT

public:
    GetSpeechSynthesisTaskResponse(const GetSpeechSynthesisTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSpeechSynthesisTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSpeechSynthesisTaskResponse)
    Q_DISABLE_COPY(GetSpeechSynthesisTaskResponse)

};

} // namespace Polly
} // namespace QtAws

#endif
