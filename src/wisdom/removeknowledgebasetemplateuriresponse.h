// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEKNOWLEDGEBASETEMPLATEURIRESPONSE_H
#define QTAWS_REMOVEKNOWLEDGEBASETEMPLATEURIRESPONSE_H

#include "wisdomresponse.h"
#include "removeknowledgebasetemplateurirequest.h"

namespace QtAws {
namespace Wisdom {

class RemoveKnowledgeBaseTemplateUriResponsePrivate;

class QTAWSWISDOM_EXPORT RemoveKnowledgeBaseTemplateUriResponse : public WisdomResponse {
    Q_OBJECT

public:
    RemoveKnowledgeBaseTemplateUriResponse(const RemoveKnowledgeBaseTemplateUriRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveKnowledgeBaseTemplateUriRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveKnowledgeBaseTemplateUriResponse)
    Q_DISABLE_COPY(RemoveKnowledgeBaseTemplateUriResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
