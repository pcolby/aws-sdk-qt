// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETOPICRULEREQUEST_H
#define QTAWS_ENABLETOPICRULEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class EnableTopicRuleRequestPrivate;

class QTAWSIOT_EXPORT EnableTopicRuleRequest : public IoTRequest {

public:
    EnableTopicRuleRequest(const EnableTopicRuleRequest &other);
    EnableTopicRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableTopicRuleRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
