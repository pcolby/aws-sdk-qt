// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESECURITYGROUPEGRESSRESPONSE_H
#define QTAWS_REVOKESECURITYGROUPEGRESSRESPONSE_H

#include "ec2response.h"
#include "revokesecuritygroupegressrequest.h"

namespace QtAws {
namespace Ec2 {

class RevokeSecurityGroupEgressResponsePrivate;

class QTAWSEC2_EXPORT RevokeSecurityGroupEgressResponse : public Ec2Response {
    Q_OBJECT

public:
    RevokeSecurityGroupEgressResponse(const RevokeSecurityGroupEgressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeSecurityGroupEgressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeSecurityGroupEgressResponse)
    Q_DISABLE_COPY(RevokeSecurityGroupEgressResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
