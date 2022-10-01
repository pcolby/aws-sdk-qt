// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTROLPANELRESPONSE_H
#define QTAWS_UPDATECONTROLPANELRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "updatecontrolpanelrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class UpdateControlPanelResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT UpdateControlPanelResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    UpdateControlPanelResponse(const UpdateControlPanelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateControlPanelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateControlPanelResponse)
    Q_DISABLE_COPY(UpdateControlPanelResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
