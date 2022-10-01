// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEXTTRANSLATIONJOBSRESPONSE_P_H
#define QTAWS_LISTTEXTTRANSLATIONJOBSRESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class ListTextTranslationJobsResponse;

class ListTextTranslationJobsResponsePrivate : public TranslateResponsePrivate {

public:

    explicit ListTextTranslationJobsResponsePrivate(ListTextTranslationJobsResponse * const q);

    void parseListTextTranslationJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTextTranslationJobsResponse)
    Q_DISABLE_COPY(ListTextTranslationJobsResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
