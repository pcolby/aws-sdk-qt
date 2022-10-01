// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESBYPOLICYRESPONSE_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESBYPOLICYRESPONSE_H

#include "route53response.h"
#include "listtrafficpolicyinstancesbypolicyrequest.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyInstancesByPolicyResponsePrivate;

class QTAWSROUTE53_EXPORT ListTrafficPolicyInstancesByPolicyResponse : public Route53Response {
    Q_OBJECT

public:
    ListTrafficPolicyInstancesByPolicyResponse(const ListTrafficPolicyInstancesByPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrafficPolicyInstancesByPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrafficPolicyInstancesByPolicyResponse)
    Q_DISABLE_COPY(ListTrafficPolicyInstancesByPolicyResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
