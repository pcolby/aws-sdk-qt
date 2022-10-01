// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMANAGEDINSTANCEROLERESPONSE_H
#define QTAWS_UPDATEMANAGEDINSTANCEROLERESPONSE_H

#include "ssmresponse.h"
#include "updatemanagedinstancerolerequest.h"

namespace QtAws {
namespace Ssm {

class UpdateManagedInstanceRoleResponsePrivate;

class QTAWSSSM_EXPORT UpdateManagedInstanceRoleResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateManagedInstanceRoleResponse(const UpdateManagedInstanceRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateManagedInstanceRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateManagedInstanceRoleResponse)
    Q_DISABLE_COPY(UpdateManagedInstanceRoleResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
