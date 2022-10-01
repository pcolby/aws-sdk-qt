// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERRESPONSE_H
#define QTAWS_DELETELOADBALANCERRESPONSE_H

#include "lightsailresponse.h"
#include "deleteloadbalancerrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteLoadBalancerResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteLoadBalancerResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteLoadBalancerResponse(const DeleteLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoadBalancerResponse)
    Q_DISABLE_COPY(DeleteLoadBalancerResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
