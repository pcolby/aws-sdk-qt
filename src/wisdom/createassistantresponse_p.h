// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSISTANTRESPONSE_P_H
#define QTAWS_CREATEASSISTANTRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class CreateAssistantResponse;

class CreateAssistantResponsePrivate : public WisdomResponsePrivate {

public:

    explicit CreateAssistantResponsePrivate(CreateAssistantResponse * const q);

    void parseCreateAssistantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssistantResponse)
    Q_DISABLE_COPY(CreateAssistantResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
