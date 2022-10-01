// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOPICRULEREQUEST_H
#define QTAWS_CREATETOPICRULEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateTopicRuleRequestPrivate;

class QTAWSIOT_EXPORT CreateTopicRuleRequest : public IoTRequest {

public:
    CreateTopicRuleRequest(const CreateTopicRuleRequest &other);
    CreateTopicRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTopicRuleRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
