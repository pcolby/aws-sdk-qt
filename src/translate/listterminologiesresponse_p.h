// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTERMINOLOGIESRESPONSE_P_H
#define QTAWS_LISTTERMINOLOGIESRESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class ListTerminologiesResponse;

class ListTerminologiesResponsePrivate : public TranslateResponsePrivate {

public:

    explicit ListTerminologiesResponsePrivate(ListTerminologiesResponse * const q);

    void parseListTerminologiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTerminologiesResponse)
    Q_DISABLE_COPY(ListTerminologiesResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
