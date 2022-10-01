// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICRULEDESTINATIONRESPONSE_H
#define QTAWS_GETTOPICRULEDESTINATIONRESPONSE_H

#include "iotresponse.h"
#include "gettopicruledestinationrequest.h"

namespace QtAws {
namespace IoT {

class GetTopicRuleDestinationResponsePrivate;

class QTAWSIOT_EXPORT GetTopicRuleDestinationResponse : public IoTResponse {
    Q_OBJECT

public:
    GetTopicRuleDestinationResponse(const GetTopicRuleDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTopicRuleDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTopicRuleDestinationResponse)
    Q_DISABLE_COPY(GetTopicRuleDestinationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
