// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLISTENERRESPONSE_H
#define QTAWS_MODIFYLISTENERRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "modifylistenerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyListenerResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyListenerResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    ModifyListenerResponse(const ModifyListenerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyListenerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyListenerResponse)
    Q_DISABLE_COPY(ModifyListenerResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
