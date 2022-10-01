// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKNOWLEDGEBASETEMPLATEURIRESPONSE_H
#define QTAWS_UPDATEKNOWLEDGEBASETEMPLATEURIRESPONSE_H

#include "wisdomresponse.h"
#include "updateknowledgebasetemplateurirequest.h"

namespace QtAws {
namespace Wisdom {

class UpdateKnowledgeBaseTemplateUriResponsePrivate;

class QTAWSWISDOM_EXPORT UpdateKnowledgeBaseTemplateUriResponse : public WisdomResponse {
    Q_OBJECT

public:
    UpdateKnowledgeBaseTemplateUriResponse(const UpdateKnowledgeBaseTemplateUriRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateKnowledgeBaseTemplateUriRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateKnowledgeBaseTemplateUriResponse)
    Q_DISABLE_COPY(UpdateKnowledgeBaseTemplateUriResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
