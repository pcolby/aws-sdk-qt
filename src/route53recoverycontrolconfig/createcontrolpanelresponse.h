// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTROLPANELRESPONSE_H
#define QTAWS_CREATECONTROLPANELRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "createcontrolpanelrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateControlPanelResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT CreateControlPanelResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    CreateControlPanelResponse(const CreateControlPanelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateControlPanelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateControlPanelResponse)
    Q_DISABLE_COPY(CreateControlPanelResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
