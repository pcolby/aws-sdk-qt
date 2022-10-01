// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYVERSIONRESPONSE_H
#define QTAWS_CREATETRAFFICPOLICYVERSIONRESPONSE_H

#include "route53response.h"
#include "createtrafficpolicyversionrequest.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyVersionResponsePrivate;

class QTAWSROUTE53_EXPORT CreateTrafficPolicyVersionResponse : public Route53Response {
    Q_OBJECT

public:
    CreateTrafficPolicyVersionResponse(const CreateTrafficPolicyVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrafficPolicyVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficPolicyVersionResponse)
    Q_DISABLE_COPY(CreateTrafficPolicyVersionResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
