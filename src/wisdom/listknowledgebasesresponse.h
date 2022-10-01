// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKNOWLEDGEBASESRESPONSE_H
#define QTAWS_LISTKNOWLEDGEBASESRESPONSE_H

#include "wisdomresponse.h"
#include "listknowledgebasesrequest.h"

namespace QtAws {
namespace Wisdom {

class ListKnowledgeBasesResponsePrivate;

class QTAWSWISDOM_EXPORT ListKnowledgeBasesResponse : public WisdomResponse {
    Q_OBJECT

public:
    ListKnowledgeBasesResponse(const ListKnowledgeBasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListKnowledgeBasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKnowledgeBasesResponse)
    Q_DISABLE_COPY(ListKnowledgeBasesResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
