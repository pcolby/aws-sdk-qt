// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICIESRESPONSE_H
#define QTAWS_LISTTRAFFICPOLICIESRESPONSE_H

#include "route53response.h"
#include "listtrafficpoliciesrequest.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPoliciesResponsePrivate;

class QTAWSROUTE53_EXPORT ListTrafficPoliciesResponse : public Route53Response {
    Q_OBJECT

public:
    ListTrafficPoliciesResponse(const ListTrafficPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrafficPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrafficPoliciesResponse)
    Q_DISABLE_COPY(ListTrafficPoliciesResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
