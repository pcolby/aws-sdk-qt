// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTEXTTRANSLATIONJOBRESPONSE_H
#define QTAWS_STARTTEXTTRANSLATIONJOBRESPONSE_H

#include "translateresponse.h"
#include "starttexttranslationjobrequest.h"

namespace QtAws {
namespace Translate {

class StartTextTranslationJobResponsePrivate;

class QTAWSTRANSLATE_EXPORT StartTextTranslationJobResponse : public TranslateResponse {
    Q_OBJECT

public:
    StartTextTranslationJobResponse(const StartTextTranslationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTextTranslationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTextTranslationJobResponse)
    Q_DISABLE_COPY(StartTextTranslationJobResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
