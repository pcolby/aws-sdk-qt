// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSISTANTSRESPONSE_P_H
#define QTAWS_LISTASSISTANTSRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class ListAssistantsResponse;

class ListAssistantsResponsePrivate : public WisdomResponsePrivate {

public:

    explicit ListAssistantsResponsePrivate(ListAssistantsResponse * const q);

    void parseListAssistantsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssistantsResponse)
    Q_DISABLE_COPY(ListAssistantsResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
