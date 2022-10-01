// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREUSABLEDELEGATIONSETLIMITRESPONSE_H
#define QTAWS_GETREUSABLEDELEGATIONSETLIMITRESPONSE_H

#include "route53response.h"
#include "getreusabledelegationsetlimitrequest.h"

namespace QtAws {
namespace Route53 {

class GetReusableDelegationSetLimitResponsePrivate;

class QTAWSROUTE53_EXPORT GetReusableDelegationSetLimitResponse : public Route53Response {
    Q_OBJECT

public:
    GetReusableDelegationSetLimitResponse(const GetReusableDelegationSetLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReusableDelegationSetLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReusableDelegationSetLimitResponse)
    Q_DISABLE_COPY(GetReusableDelegationSetLimitResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
