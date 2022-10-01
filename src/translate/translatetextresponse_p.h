// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSLATETEXTRESPONSE_P_H
#define QTAWS_TRANSLATETEXTRESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class TranslateTextResponse;

class TranslateTextResponsePrivate : public TranslateResponsePrivate {

public:

    explicit TranslateTextResponsePrivate(TranslateTextResponse * const q);

    void parseTranslateTextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TranslateTextResponse)
    Q_DISABLE_COPY(TranslateTextResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
