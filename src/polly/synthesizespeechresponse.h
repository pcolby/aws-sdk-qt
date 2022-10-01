// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNTHESIZESPEECHRESPONSE_H
#define QTAWS_SYNTHESIZESPEECHRESPONSE_H

#include "pollyresponse.h"
#include "synthesizespeechrequest.h"

namespace QtAws {
namespace Polly {

class SynthesizeSpeechResponsePrivate;

class QTAWSPOLLY_EXPORT SynthesizeSpeechResponse : public PollyResponse {
    Q_OBJECT

public:
    SynthesizeSpeechResponse(const SynthesizeSpeechRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SynthesizeSpeechRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SynthesizeSpeechResponse)
    Q_DISABLE_COPY(SynthesizeSpeechResponse)

};

} // namespace Polly
} // namespace QtAws

#endif
