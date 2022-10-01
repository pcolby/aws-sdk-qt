// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICRULEDESTINATIONSRESPONSE_H
#define QTAWS_LISTTOPICRULEDESTINATIONSRESPONSE_H

#include "iotresponse.h"
#include "listtopicruledestinationsrequest.h"

namespace QtAws {
namespace IoT {

class ListTopicRuleDestinationsResponsePrivate;

class QTAWSIOT_EXPORT ListTopicRuleDestinationsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListTopicRuleDestinationsResponse(const ListTopicRuleDestinationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTopicRuleDestinationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTopicRuleDestinationsResponse)
    Q_DISABLE_COPY(ListTopicRuleDestinationsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
