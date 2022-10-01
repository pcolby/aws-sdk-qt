// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEROLETOGROUPRESPONSE_H
#define QTAWS_ASSOCIATEROLETOGROUPRESPONSE_H

#include "greengrassresponse.h"
#include "associateroletogrouprequest.h"

namespace QtAws {
namespace Greengrass {

class AssociateRoleToGroupResponsePrivate;

class QTAWSGREENGRASS_EXPORT AssociateRoleToGroupResponse : public GreengrassResponse {
    Q_OBJECT

public:
    AssociateRoleToGroupResponse(const AssociateRoleToGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateRoleToGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateRoleToGroupResponse)
    Q_DISABLE_COPY(AssociateRoleToGroupResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
