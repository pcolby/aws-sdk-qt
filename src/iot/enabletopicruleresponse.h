// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETOPICRULERESPONSE_H
#define QTAWS_ENABLETOPICRULERESPONSE_H

#include "iotresponse.h"
#include "enabletopicrulerequest.h"

namespace QtAws {
namespace IoT {

class EnableTopicRuleResponsePrivate;

class QTAWSIOT_EXPORT EnableTopicRuleResponse : public IoTResponse {
    Q_OBJECT

public:
    EnableTopicRuleResponse(const EnableTopicRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableTopicRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableTopicRuleResponse)
    Q_DISABLE_COPY(EnableTopicRuleResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
