// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSISTANTRESPONSE_P_H
#define QTAWS_GETASSISTANTRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class GetAssistantResponse;

class GetAssistantResponsePrivate : public WisdomResponsePrivate {

public:

    explicit GetAssistantResponsePrivate(GetAssistantResponse * const q);

    void parseGetAssistantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssistantResponse)
    Q_DISABLE_COPY(GetAssistantResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
