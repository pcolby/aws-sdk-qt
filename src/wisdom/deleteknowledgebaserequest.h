// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKNOWLEDGEBASEREQUEST_H
#define QTAWS_DELETEKNOWLEDGEBASEREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteKnowledgeBaseRequestPrivate;

class QTAWSWISDOM_EXPORT DeleteKnowledgeBaseRequest : public WisdomRequest {

public:
    DeleteKnowledgeBaseRequest(const DeleteKnowledgeBaseRequest &other);
    DeleteKnowledgeBaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKnowledgeBaseRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
