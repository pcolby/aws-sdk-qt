// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTEXTTRANSLATIONJOBRESPONSE_P_H
#define QTAWS_STOPTEXTTRANSLATIONJOBRESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class StopTextTranslationJobResponse;

class StopTextTranslationJobResponsePrivate : public TranslateResponsePrivate {

public:

    explicit StopTextTranslationJobResponsePrivate(StopTextTranslationJobResponse * const q);

    void parseStopTextTranslationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopTextTranslationJobResponse)
    Q_DISABLE_COPY(StopTextTranslationJobResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
