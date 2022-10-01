// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCROSSACCOUNTACCESSROLERESPONSE_P_H
#define QTAWS_REGISTERCROSSACCOUNTACCESSROLERESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class RegisterCrossAccountAccessRoleResponse;

class RegisterCrossAccountAccessRoleResponsePrivate : public InspectorResponsePrivate {

public:

    explicit RegisterCrossAccountAccessRoleResponsePrivate(RegisterCrossAccountAccessRoleResponse * const q);

    void parseRegisterCrossAccountAccessRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterCrossAccountAccessRoleResponse)
    Q_DISABLE_COPY(RegisterCrossAccountAccessRoleResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
