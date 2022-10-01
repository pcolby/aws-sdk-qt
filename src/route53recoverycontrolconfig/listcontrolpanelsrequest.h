// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLPANELSREQUEST_H
#define QTAWS_LISTCONTROLPANELSREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListControlPanelsRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT ListControlPanelsRequest : public Route53RecoveryControlConfigRequest {

public:
    ListControlPanelsRequest(const ListControlPanelsRequest &other);
    ListControlPanelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListControlPanelsRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
