// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYASSISTANTRESPONSE_H
#define QTAWS_QUERYASSISTANTRESPONSE_H

#include "wisdomresponse.h"
#include "queryassistantrequest.h"

namespace QtAws {
namespace Wisdom {

class QueryAssistantResponsePrivate;

class QTAWSWISDOM_EXPORT QueryAssistantResponse : public WisdomResponse {
    Q_OBJECT

public:
    QueryAssistantResponse(const QueryAssistantRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const QueryAssistantRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryAssistantResponse)
    Q_DISABLE_COPY(QueryAssistantResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
