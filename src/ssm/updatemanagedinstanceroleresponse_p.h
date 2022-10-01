// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMANAGEDINSTANCEROLERESPONSE_P_H
#define QTAWS_UPDATEMANAGEDINSTANCEROLERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateManagedInstanceRoleResponse;

class UpdateManagedInstanceRoleResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateManagedInstanceRoleResponsePrivate(UpdateManagedInstanceRoleResponse * const q);

    void parseUpdateManagedInstanceRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateManagedInstanceRoleResponse)
    Q_DISABLE_COPY(UpdateManagedInstanceRoleResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
