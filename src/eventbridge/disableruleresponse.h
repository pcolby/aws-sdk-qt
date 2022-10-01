// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERULERESPONSE_H
#define QTAWS_DISABLERULERESPONSE_H

#include "eventbridgeresponse.h"
#include "disablerulerequest.h"

namespace QtAws {
namespace EventBridge {

class DisableRuleResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT DisableRuleResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    DisableRuleResponse(const DisableRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableRuleResponse)
    Q_DISABLE_COPY(DisableRuleResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
