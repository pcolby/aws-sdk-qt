// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERIAMROLESRESPONSE_P_H
#define QTAWS_MODIFYCLUSTERIAMROLESRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterIamRolesResponse;

class ModifyClusterIamRolesResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyClusterIamRolesResponsePrivate(ModifyClusterIamRolesResponse * const q);

    void parseModifyClusterIamRolesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyClusterIamRolesResponse)
    Q_DISABLE_COPY(ModifyClusterIamRolesResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
