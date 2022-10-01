// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERRESPONSE_H
#define QTAWS_DESCRIBECLUSTERRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "describeclusterrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeClusterResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DescribeClusterResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    DescribeClusterResponse(const DescribeClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterResponse)
    Q_DISABLE_COPY(DescribeClusterResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
