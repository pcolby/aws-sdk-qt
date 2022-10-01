// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZEUTTERANCERESPONSE_H
#define QTAWS_RECOGNIZEUTTERANCERESPONSE_H

#include "lexruntimev2response.h"
#include "recognizeutterancerequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class RecognizeUtteranceResponsePrivate;

class QTAWSLEXRUNTIMEV2_EXPORT RecognizeUtteranceResponse : public LexRuntimeV2Response {
    Q_OBJECT

public:
    RecognizeUtteranceResponse(const RecognizeUtteranceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RecognizeUtteranceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecognizeUtteranceResponse)
    Q_DISABLE_COPY(RecognizeUtteranceResponse)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
