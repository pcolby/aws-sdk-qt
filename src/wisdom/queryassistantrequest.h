// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYASSISTANTREQUEST_H
#define QTAWS_QUERYASSISTANTREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class QueryAssistantRequestPrivate;

class QTAWSWISDOM_EXPORT QueryAssistantRequest : public WisdomRequest {

public:
    QueryAssistantRequest(const QueryAssistantRequest &other);
    QueryAssistantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryAssistantRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
