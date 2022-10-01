// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLETOPICRULERESPONSE_H
#define QTAWS_DISABLETOPICRULERESPONSE_H

#include "iotresponse.h"
#include "disabletopicrulerequest.h"

namespace QtAws {
namespace IoT {

class DisableTopicRuleResponsePrivate;

class QTAWSIOT_EXPORT DisableTopicRuleResponse : public IoTResponse {
    Q_OBJECT

public:
    DisableTopicRuleResponse(const DisableTopicRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableTopicRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableTopicRuleResponse)
    Q_DISABLE_COPY(DisableTopicRuleResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
