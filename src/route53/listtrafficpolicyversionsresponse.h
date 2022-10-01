// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYVERSIONSRESPONSE_H
#define QTAWS_LISTTRAFFICPOLICYVERSIONSRESPONSE_H

#include "route53response.h"
#include "listtrafficpolicyversionsrequest.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyVersionsResponsePrivate;

class QTAWSROUTE53_EXPORT ListTrafficPolicyVersionsResponse : public Route53Response {
    Q_OBJECT

public:
    ListTrafficPolicyVersionsResponse(const ListTrafficPolicyVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrafficPolicyVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrafficPolicyVersionsResponse)
    Q_DISABLE_COPY(ListTrafficPolicyVersionsResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
