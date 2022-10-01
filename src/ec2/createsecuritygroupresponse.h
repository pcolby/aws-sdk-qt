// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYGROUPRESPONSE_H
#define QTAWS_CREATESECURITYGROUPRESPONSE_H

#include "ec2response.h"
#include "createsecuritygrouprequest.h"

namespace QtAws {
namespace Ec2 {

class CreateSecurityGroupResponsePrivate;

class QTAWSEC2_EXPORT CreateSecurityGroupResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateSecurityGroupResponse(const CreateSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSecurityGroupResponse)
    Q_DISABLE_COPY(CreateSecurityGroupResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
