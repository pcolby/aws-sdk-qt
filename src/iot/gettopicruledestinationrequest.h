// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICRULEDESTINATIONREQUEST_H
#define QTAWS_GETTOPICRULEDESTINATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetTopicRuleDestinationRequestPrivate;

class QTAWSIOT_EXPORT GetTopicRuleDestinationRequest : public IoTRequest {

public:
    GetTopicRuleDestinationRequest(const GetTopicRuleDestinationRequest &other);
    GetTopicRuleDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTopicRuleDestinationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
