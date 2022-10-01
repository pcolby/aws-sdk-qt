// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKNOWLEDGEBASERESPONSE_P_H
#define QTAWS_DELETEKNOWLEDGEBASERESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class DeleteKnowledgeBaseResponse;

class DeleteKnowledgeBaseResponsePrivate : public WisdomResponsePrivate {

public:

    explicit DeleteKnowledgeBaseResponsePrivate(DeleteKnowledgeBaseResponse * const q);

    void parseDeleteKnowledgeBaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteKnowledgeBaseResponse)
    Q_DISABLE_COPY(DeleteKnowledgeBaseResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
