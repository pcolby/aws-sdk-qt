// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALCLUSTERRESPONSE_P_H
#define QTAWS_MODIFYGLOBALCLUSTERRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class ModifyGlobalClusterResponse;

class ModifyGlobalClusterResponsePrivate : public DocDbResponsePrivate {

public:

    explicit ModifyGlobalClusterResponsePrivate(ModifyGlobalClusterResponse * const q);

    void parseModifyGlobalClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyGlobalClusterResponse)
    Q_DISABLE_COPY(ModifyGlobalClusterResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
