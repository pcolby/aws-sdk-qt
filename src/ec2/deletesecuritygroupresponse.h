// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYGROUPRESPONSE_H
#define QTAWS_DELETESECURITYGROUPRESPONSE_H

#include "ec2response.h"
#include "deletesecuritygrouprequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteSecurityGroupResponsePrivate;

class QTAWSEC2_EXPORT DeleteSecurityGroupResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteSecurityGroupResponse(const DeleteSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSecurityGroupResponse)
    Q_DISABLE_COPY(DeleteSecurityGroupResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
