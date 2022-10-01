// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTROLPANELRESPONSE_H
#define QTAWS_DESCRIBECONTROLPANELRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "describecontrolpanelrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeControlPanelResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DescribeControlPanelResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    DescribeControlPanelResponse(const DescribeControlPanelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeControlPanelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeControlPanelResponse)
    Q_DISABLE_COPY(DescribeControlPanelResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
