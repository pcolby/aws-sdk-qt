// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLPANELSRESPONSE_H
#define QTAWS_LISTCONTROLPANELSRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "listcontrolpanelsrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListControlPanelsResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT ListControlPanelsResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    ListControlPanelsResponse(const ListControlPanelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListControlPanelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListControlPanelsResponse)
    Q_DISABLE_COPY(ListControlPanelsResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
