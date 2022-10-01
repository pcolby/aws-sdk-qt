// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROLEALIASRESPONSE_P_H
#define QTAWS_CREATEROLEALIASRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateRoleAliasResponse;

class CreateRoleAliasResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateRoleAliasResponsePrivate(CreateRoleAliasResponse * const q);

    void parseCreateRoleAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRoleAliasResponse)
    Q_DISABLE_COPY(CreateRoleAliasResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
