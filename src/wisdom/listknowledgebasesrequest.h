// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKNOWLEDGEBASESREQUEST_H
#define QTAWS_LISTKNOWLEDGEBASESREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class ListKnowledgeBasesRequestPrivate;

class QTAWSWISDOM_EXPORT ListKnowledgeBasesRequest : public WisdomRequest {

public:
    ListKnowledgeBasesRequest(const ListKnowledgeBasesRequest &other);
    ListKnowledgeBasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKnowledgeBasesRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
