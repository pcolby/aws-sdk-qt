// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRULEPRIORITIESRESPONSE_H
#define QTAWS_SETRULEPRIORITIESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "setruleprioritiesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetRulePrioritiesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT SetRulePrioritiesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    SetRulePrioritiesResponse(const SetRulePrioritiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetRulePrioritiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetRulePrioritiesResponse)
    Q_DISABLE_COPY(SetRulePrioritiesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
