// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAFFICPOLICYINSTANCERESPONSE_H
#define QTAWS_UPDATETRAFFICPOLICYINSTANCERESPONSE_H

#include "route53response.h"
#include "updatetrafficpolicyinstancerequest.h"

namespace QtAws {
namespace Route53 {

class UpdateTrafficPolicyInstanceResponsePrivate;

class QTAWSROUTE53_EXPORT UpdateTrafficPolicyInstanceResponse : public Route53Response {
    Q_OBJECT

public:
    UpdateTrafficPolicyInstanceResponse(const UpdateTrafficPolicyInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTrafficPolicyInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrafficPolicyInstanceResponse)
    Q_DISABLE_COPY(UpdateTrafficPolicyInstanceResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
