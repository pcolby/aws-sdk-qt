// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTEXTTRANSLATIONJOBRESPONSE_H
#define QTAWS_STOPTEXTTRANSLATIONJOBRESPONSE_H

#include "translateresponse.h"
#include "stoptexttranslationjobrequest.h"

namespace QtAws {
namespace Translate {

class StopTextTranslationJobResponsePrivate;

class QTAWSTRANSLATE_EXPORT StopTextTranslationJobResponse : public TranslateResponse {
    Q_OBJECT

public:
    StopTextTranslationJobResponse(const StopTextTranslationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopTextTranslationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTextTranslationJobResponse)
    Q_DISABLE_COPY(StopTextTranslationJobResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
