// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLEALIASESRESPONSE_P_H
#define QTAWS_LISTROLEALIASESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListRoleAliasesResponse;

class ListRoleAliasesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListRoleAliasesResponsePrivate(ListRoleAliasesResponse * const q);

    void parseListRoleAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRoleAliasesResponse)
    Q_DISABLE_COPY(ListRoleAliasesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
