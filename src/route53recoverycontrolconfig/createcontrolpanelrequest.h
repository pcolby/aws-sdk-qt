// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTROLPANELREQUEST_H
#define QTAWS_CREATECONTROLPANELREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateControlPanelRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT CreateControlPanelRequest : public Route53RecoveryControlConfigRequest {

public:
    CreateControlPanelRequest(const CreateControlPanelRequest &other);
    CreateControlPanelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateControlPanelRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
