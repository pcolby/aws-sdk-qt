// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTEXTTRANSLATIONJOBRESPONSE_P_H
#define QTAWS_STARTTEXTTRANSLATIONJOBRESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class StartTextTranslationJobResponse;

class StartTextTranslationJobResponsePrivate : public TranslateResponsePrivate {

public:

    explicit StartTextTranslationJobResponsePrivate(StartTextTranslationJobResponse * const q);

    void parseStartTextTranslationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTextTranslationJobResponse)
    Q_DISABLE_COPY(StartTextTranslationJobResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
