// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMTOPICRULEDESTINATIONREQUEST_H
#define QTAWS_CONFIRMTOPICRULEDESTINATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ConfirmTopicRuleDestinationRequestPrivate;

class QTAWSIOT_EXPORT ConfirmTopicRuleDestinationRequest : public IoTRequest {

public:
    ConfirmTopicRuleDestinationRequest(const ConfirmTopicRuleDestinationRequest &other);
    ConfirmTopicRuleDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmTopicRuleDestinationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
