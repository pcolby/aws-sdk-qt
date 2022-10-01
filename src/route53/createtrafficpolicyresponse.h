// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYRESPONSE_H
#define QTAWS_CREATETRAFFICPOLICYRESPONSE_H

#include "route53response.h"
#include "createtrafficpolicyrequest.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyResponsePrivate;

class QTAWSROUTE53_EXPORT CreateTrafficPolicyResponse : public Route53Response {
    Q_OBJECT

public:
    CreateTrafficPolicyResponse(const CreateTrafficPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrafficPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficPolicyResponse)
    Q_DISABLE_COPY(CreateTrafficPolicyResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
