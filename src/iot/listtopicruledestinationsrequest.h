// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICRULEDESTINATIONSREQUEST_H
#define QTAWS_LISTTOPICRULEDESTINATIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListTopicRuleDestinationsRequestPrivate;

class QTAWSIOT_EXPORT ListTopicRuleDestinationsRequest : public IoTRequest {

public:
    ListTopicRuleDestinationsRequest(const ListTopicRuleDestinationsRequest &other);
    ListTopicRuleDestinationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTopicRuleDestinationsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
