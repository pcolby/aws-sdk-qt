// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELISTENERRESPONSE_H
#define QTAWS_CREATELISTENERRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "createlistenerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateListenerResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT CreateListenerResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    CreateListenerResponse(const CreateListenerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateListenerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateListenerResponse)
    Q_DISABLE_COPY(CreateListenerResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
