// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSISTANTRESPONSE_P_H
#define QTAWS_DELETEASSISTANTRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class DeleteAssistantResponse;

class DeleteAssistantResponsePrivate : public WisdomResponsePrivate {

public:

    explicit DeleteAssistantResponsePrivate(DeleteAssistantResponse * const q);

    void parseDeleteAssistantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssistantResponse)
    Q_DISABLE_COPY(DeleteAssistantResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
