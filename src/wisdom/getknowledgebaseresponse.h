// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKNOWLEDGEBASERESPONSE_H
#define QTAWS_GETKNOWLEDGEBASERESPONSE_H

#include "wisdomresponse.h"
#include "getknowledgebaserequest.h"

namespace QtAws {
namespace Wisdom {

class GetKnowledgeBaseResponsePrivate;

class QTAWSWISDOM_EXPORT GetKnowledgeBaseResponse : public WisdomResponse {
    Q_OBJECT

public:
    GetKnowledgeBaseResponse(const GetKnowledgeBaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetKnowledgeBaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKnowledgeBaseResponse)
    Q_DISABLE_COPY(GetKnowledgeBaseResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
