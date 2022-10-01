// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICRULEREQUEST_H
#define QTAWS_GETTOPICRULEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetTopicRuleRequestPrivate;

class QTAWSIOT_EXPORT GetTopicRuleRequest : public IoTRequest {

public:
    GetTopicRuleRequest(const GetTopicRuleRequest &other);
    GetTopicRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTopicRuleRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
