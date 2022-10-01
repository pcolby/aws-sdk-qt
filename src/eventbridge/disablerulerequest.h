// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERULEREQUEST_H
#define QTAWS_DISABLERULEREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class DisableRuleRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT DisableRuleRequest : public EventBridgeRequest {

public:
    DisableRuleRequest(const DisableRuleRequest &other);
    DisableRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableRuleRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
