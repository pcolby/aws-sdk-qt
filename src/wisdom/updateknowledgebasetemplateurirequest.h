// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKNOWLEDGEBASETEMPLATEURIREQUEST_H
#define QTAWS_UPDATEKNOWLEDGEBASETEMPLATEURIREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class UpdateKnowledgeBaseTemplateUriRequestPrivate;

class QTAWSWISDOM_EXPORT UpdateKnowledgeBaseTemplateUriRequest : public WisdomRequest {

public:
    UpdateKnowledgeBaseTemplateUriRequest(const UpdateKnowledgeBaseTemplateUriRequest &other);
    UpdateKnowledgeBaseTemplateUriRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateKnowledgeBaseTemplateUriRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
