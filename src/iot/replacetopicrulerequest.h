// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACETOPICRULEREQUEST_H
#define QTAWS_REPLACETOPICRULEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ReplaceTopicRuleRequestPrivate;

class QTAWSIOT_EXPORT ReplaceTopicRuleRequest : public IoTRequest {

public:
    ReplaceTopicRuleRequest(const ReplaceTopicRuleRequest &other);
    ReplaceTopicRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceTopicRuleRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
