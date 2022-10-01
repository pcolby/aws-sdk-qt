// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACETOPICRULERESPONSE_H
#define QTAWS_REPLACETOPICRULERESPONSE_H

#include "iotresponse.h"
#include "replacetopicrulerequest.h"

namespace QtAws {
namespace IoT {

class ReplaceTopicRuleResponsePrivate;

class QTAWSIOT_EXPORT ReplaceTopicRuleResponse : public IoTResponse {
    Q_OBJECT

public:
    ReplaceTopicRuleResponse(const ReplaceTopicRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReplaceTopicRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceTopicRuleResponse)
    Q_DISABLE_COPY(ReplaceTopicRuleResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
