// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROLEFROMGROUPRESPONSE_H
#define QTAWS_DISASSOCIATEROLEFROMGROUPRESPONSE_H

#include "greengrassresponse.h"
#include "disassociaterolefromgrouprequest.h"

namespace QtAws {
namespace Greengrass {

class DisassociateRoleFromGroupResponsePrivate;

class QTAWSGREENGRASS_EXPORT DisassociateRoleFromGroupResponse : public GreengrassResponse {
    Q_OBJECT

public:
    DisassociateRoleFromGroupResponse(const DisassociateRoleFromGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateRoleFromGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateRoleFromGroupResponse)
    Q_DISABLE_COPY(DisassociateRoleFromGroupResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
