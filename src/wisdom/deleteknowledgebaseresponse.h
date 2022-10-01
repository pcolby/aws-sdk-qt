// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKNOWLEDGEBASERESPONSE_H
#define QTAWS_DELETEKNOWLEDGEBASERESPONSE_H

#include "wisdomresponse.h"
#include "deleteknowledgebaserequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteKnowledgeBaseResponsePrivate;

class QTAWSWISDOM_EXPORT DeleteKnowledgeBaseResponse : public WisdomResponse {
    Q_OBJECT

public:
    DeleteKnowledgeBaseResponse(const DeleteKnowledgeBaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteKnowledgeBaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKnowledgeBaseResponse)
    Q_DISABLE_COPY(DeleteKnowledgeBaseResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
