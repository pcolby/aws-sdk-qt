// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULERESPONSE_H
#define QTAWS_PUTRULERESPONSE_H

#include "eventbridgeresponse.h"
#include "putrulerequest.h"

namespace QtAws {
namespace EventBridge {

class PutRuleResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT PutRuleResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    PutRuleResponse(const PutRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRuleResponse)
    Q_DISABLE_COPY(PutRuleResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
