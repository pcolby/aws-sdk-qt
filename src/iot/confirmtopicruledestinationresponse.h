// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMTOPICRULEDESTINATIONRESPONSE_H
#define QTAWS_CONFIRMTOPICRULEDESTINATIONRESPONSE_H

#include "iotresponse.h"
#include "confirmtopicruledestinationrequest.h"

namespace QtAws {
namespace IoT {

class ConfirmTopicRuleDestinationResponsePrivate;

class QTAWSIOT_EXPORT ConfirmTopicRuleDestinationResponse : public IoTResponse {
    Q_OBJECT

public:
    ConfirmTopicRuleDestinationResponse(const ConfirmTopicRuleDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmTopicRuleDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmTopicRuleDestinationResponse)
    Q_DISABLE_COPY(ConfirmTopicRuleDestinationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
