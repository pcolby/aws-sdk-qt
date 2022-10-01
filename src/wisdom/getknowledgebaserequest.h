// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKNOWLEDGEBASEREQUEST_H
#define QTAWS_GETKNOWLEDGEBASEREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class GetKnowledgeBaseRequestPrivate;

class QTAWSWISDOM_EXPORT GetKnowledgeBaseRequest : public WisdomRequest {

public:
    GetKnowledgeBaseRequest(const GetKnowledgeBaseRequest &other);
    GetKnowledgeBaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKnowledgeBaseRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
