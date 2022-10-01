// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKNOWLEDGEBASEREQUEST_H
#define QTAWS_CREATEKNOWLEDGEBASEREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateKnowledgeBaseRequestPrivate;

class QTAWSWISDOM_EXPORT CreateKnowledgeBaseRequest : public WisdomRequest {

public:
    CreateKnowledgeBaseRequest(const CreateKnowledgeBaseRequest &other);
    CreateKnowledgeBaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKnowledgeBaseRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
