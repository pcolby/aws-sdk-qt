// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEKNOWLEDGEBASETEMPLATEURIREQUEST_H
#define QTAWS_REMOVEKNOWLEDGEBASETEMPLATEURIREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class RemoveKnowledgeBaseTemplateUriRequestPrivate;

class QTAWSWISDOM_EXPORT RemoveKnowledgeBaseTemplateUriRequest : public WisdomRequest {

public:
    RemoveKnowledgeBaseTemplateUriRequest(const RemoveKnowledgeBaseTemplateUriRequest &other);
    RemoveKnowledgeBaseTemplateUriRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveKnowledgeBaseTemplateUriRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
