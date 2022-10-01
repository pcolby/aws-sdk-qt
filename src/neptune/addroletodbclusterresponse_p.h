// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETODBCLUSTERRESPONSE_P_H
#define QTAWS_ADDROLETODBCLUSTERRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class AddRoleToDBClusterResponse;

class AddRoleToDBClusterResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit AddRoleToDBClusterResponsePrivate(AddRoleToDBClusterResponse * const q);

    void parseAddRoleToDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddRoleToDBClusterResponse)
    Q_DISABLE_COPY(AddRoleToDBClusterResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
