// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATESESSIONRESPONSE_H
#define QTAWS_EVALUATESESSIONRESPONSE_H

#include "voiceidresponse.h"
#include "evaluatesessionrequest.h"

namespace QtAws {
namespace VoiceId {

class EvaluateSessionResponsePrivate;

class QTAWSVOICEID_EXPORT EvaluateSessionResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    EvaluateSessionResponse(const EvaluateSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EvaluateSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvaluateSessionResponse)
    Q_DISABLE_COPY(EvaluateSessionResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
