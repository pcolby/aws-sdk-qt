// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTROLPANELRESPONSE_H
#define QTAWS_DELETECONTROLPANELRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "deletecontrolpanelrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteControlPanelResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DeleteControlPanelResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    DeleteControlPanelResponse(const DeleteControlPanelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteControlPanelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteControlPanelResponse)
    Q_DISABLE_COPY(DeleteControlPanelResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
