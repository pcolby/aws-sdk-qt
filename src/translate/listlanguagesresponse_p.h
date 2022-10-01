// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLANGUAGESRESPONSE_P_H
#define QTAWS_LISTLANGUAGESRESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class ListLanguagesResponse;

class ListLanguagesResponsePrivate : public TranslateResponsePrivate {

public:

    explicit ListLanguagesResponsePrivate(ListLanguagesResponse * const q);

    void parseListLanguagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLanguagesResponse)
    Q_DISABLE_COPY(ListLanguagesResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
