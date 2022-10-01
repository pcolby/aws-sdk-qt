// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOPICRULEDESTINATIONRESPONSE_H
#define QTAWS_CREATETOPICRULEDESTINATIONRESPONSE_H

#include "iotresponse.h"
#include "createtopicruledestinationrequest.h"

namespace QtAws {
namespace IoT {

class CreateTopicRuleDestinationResponsePrivate;

class QTAWSIOT_EXPORT CreateTopicRuleDestinationResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateTopicRuleDestinationResponse(const CreateTopicRuleDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTopicRuleDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTopicRuleDestinationResponse)
    Q_DISABLE_COPY(CreateTopicRuleDestinationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
