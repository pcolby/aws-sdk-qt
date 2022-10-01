// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLEALIASRESPONSE_P_H
#define QTAWS_UPDATEROLEALIASRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateRoleAliasResponse;

class UpdateRoleAliasResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateRoleAliasResponsePrivate(UpdateRoleAliasResponse * const q);

    void parseUpdateRoleAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoleAliasResponse)
    Q_DISABLE_COPY(UpdateRoleAliasResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
