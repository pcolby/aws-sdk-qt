// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOPICRULEDESTINATIONRESPONSE_H
#define QTAWS_DELETETOPICRULEDESTINATIONRESPONSE_H

#include "iotresponse.h"
#include "deletetopicruledestinationrequest.h"

namespace QtAws {
namespace IoT {

class DeleteTopicRuleDestinationResponsePrivate;

class QTAWSIOT_EXPORT DeleteTopicRuleDestinationResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteTopicRuleDestinationResponse(const DeleteTopicRuleDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTopicRuleDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTopicRuleDestinationResponse)
    Q_DISABLE_COPY(DeleteTopicRuleDestinationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
