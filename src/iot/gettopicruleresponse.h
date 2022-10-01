// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICRULERESPONSE_H
#define QTAWS_GETTOPICRULERESPONSE_H

#include "iotresponse.h"
#include "gettopicrulerequest.h"

namespace QtAws {
namespace IoT {

class GetTopicRuleResponsePrivate;

class QTAWSIOT_EXPORT GetTopicRuleResponse : public IoTResponse {
    Q_OBJECT

public:
    GetTopicRuleResponse(const GetTopicRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTopicRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTopicRuleResponse)
    Q_DISABLE_COPY(GetTopicRuleResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
