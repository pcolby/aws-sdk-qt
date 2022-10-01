// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSBYRULERESPONSE_H
#define QTAWS_LISTTARGETSBYRULERESPONSE_H

#include "eventbridgeresponse.h"
#include "listtargetsbyrulerequest.h"

namespace QtAws {
namespace EventBridge {

class ListTargetsByRuleResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT ListTargetsByRuleResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    ListTargetsByRuleResponse(const ListTargetsByRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTargetsByRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetsByRuleResponse)
    Q_DISABLE_COPY(ListTargetsByRuleResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
